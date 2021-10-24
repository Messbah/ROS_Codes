#!/usr/bin/env python3
import rospy
from std_msgs.msg import String, Float64


x = rospy.get_param("/wheel_radius") #takes radius of wheel from param.yaml
def process_rpm(data): #data is the rpm received from robpub script
    rpm = data.data
    wheel_radius = x
    circumference = wheel_radius * 3.14 #(pi)
    robot_speed = (rpm * circumference)/2362.0
    #rospy.init_node("speed_pub_node")
    #print(robot_speed)
    s_pub = rospy.Publisher("speed", Float64,queue_size=10)
    rate = rospy.Rate(1)
    while not rospy.is_shutdown():
        s_pub.publish(robot_speed) #publishes calculated speed
        rate.sleep()

def rpm_subscriber():
    rospy.init_node("rpm_sub_node")
    rospy.Subscriber("rpm",Float64, process_rpm) #subscribe to published rpm and process it

if __name__ == '__main__':
    rpm_subscriber()
    rospy.spin()
