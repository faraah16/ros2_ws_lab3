#!/usr/bin/env python3
"""
Battery Charging Action Server
================================
This simulates a robot charging station.

Think of it like a phone charger:
- You plug in (send goal)
- It charges slowly (feedback updates)
- It finishes when full (result)
- You can unplug anytime (cancel)
"""

import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from custom_interfaces.action import ChargeBattery


class BatteryCharger(Node):
    """
    The charging station that handles charging requests.
    """

    def __init__(self):
        super().__init__('battery_charger')
        
        # Starting battery level
        self.current_battery = 20  # Start low (20%)
        
        # How fast we charge (5% per second - fast for demo)
        self.charge_rate = 5.0
        
        self.get_logger().info('=================================')
        self.get_logger().info('🔋 Battery Charging Station Ready')
        self.get_logger().info(f'   Current battery: {self.current_battery}%')
        self.get_logger().info(f'   Charge rate: {self.charge_rate}%/sec')
        self.get_logger().info('=================================')

        # Create the action server
        self.action_server = ActionServer(
            self,
            ChargeBattery,                          # Our custom action
            'charge_battery',                        # Action name
            execute_callback=self.execute_callback,  # Main charging logic
            goal_callback=self.goal_callback,        # Accept/reject goals
            cancel_callback=self.cancel_callback     # Handle cancellation
        )
    def goal_callback(self, goal_request):
        
        #Called when someone requests charging.
        #We decide: accept or reject?
        
        #Like: Can the phone charge right now?
        #- Is the charger working?
        #- Is the battery already full?
        #- Is the request valid?
        
            target = goal_request.target_percentage
            
            self.get_logger().info(f'📥 Charging request received: {target}%')
            
            # Validation 1: Is target valid?
            if target < 0 or target > 100:
                self.get_logger().warn(f'❌ Invalid target: {target}%')
                return GoalResponse.REJECT
            
            # Validation 2: Are we already charged enough?
            if self.current_battery >= target:
                self.get_logger().warn(
                    f'❌ Already at {self.current_battery}% '
                    f'(target: {target}%)'
                )
                return GoalResponse.REJECT
            
            # All good! Accept the goal
            self.get_logger().info('✅ Goal accepted - Starting charge!')
            return GoalResponse.ACCEPT
    def cancel_callback(self, goal_handle):
        """
        Called when someone wants to cancel charging.
        Like: Unplugging your phone early.
        """
        self.get_logger().info('🛑 Cancel request received')
        return CancelResponse.ACCEPT
    def execute_callback(self, goal_handle):
        """
        THE MAIN CHARGING LOGIC
        This runs when a goal is accepted.
        
        Like: The actual charging process of your phone.
        """
        self.get_logger().info('⚡ Charging started!')
        
        # Get the target from the goal
        target = goal_handle.request.target_percentage
        
        # Record start time
        start_time = time.time()
        
        # Create feedback message
        feedback_msg = ChargeBattery.Feedback()
        
        # ====================================
        # CHARGING LOOP
        # ====================================
        while self.current_battery < target:
            
            # Check: Did user cancel?
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                
                # Return partial result
                result = ChargeBattery.Result()
                result.success = False
                result.final_percentage = self.current_battery
                result.charging_time = time.time() - start_time
                
                self.get_logger().info('🛑 Charging canceled!')
                return result
            
            # Charge the battery a bit
            charge_amount = self.charge_rate * 0.5  # 0.5 sec intervals
            self.current_battery = min(
                self.current_battery + charge_amount,
                target
            )
            
            # Calculate time remaining
            remaining_percent = target - self.current_battery
            time_remaining = remaining_percent / self.charge_rate
            
            # Prepare feedback
            feedback_msg.current_percentage = int(self.current_battery)
            feedback_msg.time_remaining = time_remaining
            feedback_msg.charging_rate = self.charge_rate
            
            # Send feedback to client
            self.get_logger().info(
                f'🔋 Charging: {feedback_msg.current_percentage}% '
                f'(~{time_remaining:.1f}s left)'
            )
            goal_handle.publish_feedback(feedback_msg)
            
            # Wait before next update
            time.sleep(0.5)
        
        # ====================================
        # CHARGING COMPLETE!
        # ====================================
        goal_handle.succeed()
        
        total_time = time.time() - start_time
        
        # Prepare result
        result = ChargeBattery.Result()
        result.success = True
        result.final_percentage = int(self.current_battery)
        result.charging_time = total_time
        
        self.get_logger().info('=================================')
        self.get_logger().info('✅ Charging complete!')
        self.get_logger().info(f'   Final: {result.final_percentage}%')
        self.get_logger().info(f'   Time: {result.charging_time:.1f}s')
        self.get_logger().info('=================================')
        
        return result


def main(args=None):
    rclpy.init(args=args)
    charger = BatteryCharger()
    
    try:
        rclpy.spin(charger)
    except KeyboardInterrupt:
        charger.get_logger().info('Shutting down...')
    
    charger.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()