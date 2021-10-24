#!/usr/bin/env python3
import rospy
import cv2
import numpy as np
from cv_bridge import CvBridge
import os
from robot_1.srv import Camera, CameraResponse

class CameraClass:
    def __init__(self):
        self.available_degrees = [-30, -15, 0, 15, 30]
        self.ros_service = rospy.Service ("camera_angle", Camera, self.send_image) #service call

    def read_in_image_by_file_name(self, file_name): #finds file according to the angle in specified directory
        dir_name = os.path.dirname(__file__)
        file_location = dir_name + "/images/" + file_name
        image = cv2.imread(file_location)
        return image


    def get_image(self,angle): #receives user input and finds relevant image
        closest_angle = min(self.available_degrees, key=lambda x:abs(x-angle))
        return self.read_in_image_by_file_name(str(closest_angle) + ".png")

    def send_image(self, req):

        image = self.get_image(req.angles) #takes in user's request
        image_msg = CvBridge().cv2_to_imgmsg(image) #converts image to image message

        return CameraResponse(image_msg)

if __name__== '__main__':
    try:
        rospy.init_node("camera_service_node")
        CameraClass()
        print("Camera service is running")
        rospy.spin()

    except rospy.ROSInterruptException:
        pass
