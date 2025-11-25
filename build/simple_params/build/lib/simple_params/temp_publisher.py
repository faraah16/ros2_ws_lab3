#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from simple_interfaces.msg import TemperatureReading
from rcl_interfaces.msg import ParameterDescriptor
import random


class TempPublisher(Node):
    """Simple temperature publisher with configurable parameters."""
    
    def __init__(self):
        super().__init__('temp_publisher')
        
        # Declare parameters
        self.declare_parameter('sensor_id', 'sensor_01',
            ParameterDescriptor(description='Sensor identifier'))
        
        self.declare_parameter('publish_rate', 1.0,
            ParameterDescriptor(description='Publishing rate in Hz'))
        
        self.declare_parameter('base_temperature', 25.0,
            ParameterDescriptor(description='Base temperature in Celsius'))
        
        # Get parameter values
        self.sensor_id = self.get_parameter('sensor_id').value
        publish_rate = self.get_parameter('publish_rate').value
        self.base_temp = self.get_parameter('base_temperature').value
        
        # Create publisher
        self.publisher = self.create_publisher(TemperatureReading, 'temperature', 10)
        
        # Create timer
        self.timer = self.create_timer(1.0 / publish_rate, self.publish_temperature)
        
        self.get_logger().info(f'🌡️  Temperature Publisher started!')
        self.get_logger().info(f'Sensor ID: {self.sensor_id}')
        self.get_logger().info(f'Base Temperature: {self.base_temp}°C')
        self.get_logger().info(f'Publish Rate: {publish_rate} Hz')
    
    def publish_temperature(self):
        """Publish a temperature reading."""
        msg = TemperatureReading()
        msg.sensor_id = self.sensor_id
        # Add some random variation
        msg.temperature = self.base_temp + random.uniform(-2.0, 2.0)
        
        self.publisher.publish(msg)
        self.get_logger().info(f'📊 {msg.sensor_id}: {msg.temperature:.2f}°C')


def main(args=None):
    rclpy.init(args=args)
    node = TempPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()