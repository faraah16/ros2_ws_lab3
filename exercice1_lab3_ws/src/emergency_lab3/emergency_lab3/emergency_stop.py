#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from fleet_interfaces.msg import FleetCommand
from builtin_interfaces.msg import Time
from geometry_msgs.msg import Point


class EmergencyStop(Node):
    def __init__(self):
        super().__init__('emergency_stop')

        self.pub = self.create_publisher(FleetCommand, 'fleet_command', 10)

        # Build the FleetCommand message
        cmd = FleetCommand()
        cmd.command_id = "EMERGENCY_STOP"

        # Timestamp
        now = self.get_clock().now().to_msg()
        cmd.timestamp = now

        # Apply to ALL robots
        cmd.target_robot_ids = []           # Empty list = all robots
        cmd.robot_type_filter = ""          # Empty = all types

        cmd.command_type = "stop"
        cmd.target_position = Point()       # Not needed, but must exist
        cmd.task_description = ""
        cmd.priority = 10

        # Execution parameters
        cmd.max_velocity = 0.0
        cmd.timeout = 0.0
        cmd.allow_interruption = True

        # Publish the emergency stop
        self.pub.publish(cmd)
        self.get_logger().info("🚨 EMERGENCY STOP SENT TO ALL ROBOTS")

        rclpy.shutdown()


def main():
    rclpy.init()
    EmergencyStop()


if __name__ == "__main__":
    main()
