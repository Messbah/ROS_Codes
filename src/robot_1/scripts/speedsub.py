#!/usr/bin/env python3
import rospy
from std_msgs.msg import String, Float64

def process_speed_msg(data): #gets the speed data from robsub.py script
    print("Speed of the robot is "+ str(data.data) +" m/s")

def speed_subscriber():
    rospy.init_node("speed_sub_node") #initializes node for speed subsciber
    rospy.Subscriber("speed",Float64, process_speed_msg) #gets speed from speed publisher in rpm_sub_node

if __name__ == '__main__':
    speed_subscriber()
    rospy.spin()
