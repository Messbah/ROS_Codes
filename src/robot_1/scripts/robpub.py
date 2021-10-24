#!/usr/bin/env python3

import rospy
from std_msgs.msg import String, Float64

def rpm_pub():
    rospy.init_node("rpm_pub_node") #Publisher node initialization
    pub = rospy.Publisher("rpm", Float64,queue_size=10) #publishes rpm


    rate = rospy.Rate(1)

    while not rospy.is_shutdown():
        pub.publish(float(350)) #350 is the rpm
        rate.sleep()

if __name__== '__main__':
    try:
        rpm_pub()

    except rospy.ROSInterruptException:
        pass
