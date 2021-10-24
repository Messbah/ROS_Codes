#!/usr/bin/env python3
import rospy
import cv2
from cv_bridge import CvBridge
import os
from robot_1.srv import Camera, CameraResponse


if __name__== '__main__':
    try:
        rospy.init_node("camera_client_node") #client node initialization

        rospy.wait_for_service("camera_angle")

        srv_proxy = rospy.ServiceProxy("camera_angle", Camera)  #creating service proxy that looks for requesed image in camera_service_node

        user_input = input("\n Degree to move camera: ") #takes user input

        resp_msg = srv_proxy(int(user_input))
        image_msg = resp_msg.image
        image = CvBridge().imgmsg_to_cv2(image_msg, desired_encoding="passthrough") #converts image message to image
        cv2.imshow('Image', image) #opencv function to show image
        cv2.waitKey(0)
        cv2.destroyAllWindows()
    except rospy.ServiceException as e:
        print("Request Failed")
        print(e)
