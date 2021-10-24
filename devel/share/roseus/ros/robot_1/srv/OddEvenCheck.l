;; Auto-generated. Do not edit!


(when (boundp 'robot_1::OddEvenCheck)
  (if (not (find-package "ROBOT_1"))
    (make-package "ROBOT_1"))
  (shadow 'OddEvenCheck (find-package "ROBOT_1")))
(unless (find-package "ROBOT_1::ODDEVENCHECK")
  (make-package "ROBOT_1::ODDEVENCHECK"))
(unless (find-package "ROBOT_1::ODDEVENCHECKREQUEST")
  (make-package "ROBOT_1::ODDEVENCHECKREQUEST"))
(unless (find-package "ROBOT_1::ODDEVENCHECKRESPONSE")
  (make-package "ROBOT_1::ODDEVENCHECKRESPONSE"))

(in-package "ROS")





(defclass robot_1::OddEvenCheckRequest
  :super ros::object
  :slots (_number ))

(defmethod robot_1::OddEvenCheckRequest
  (:init
   (&key
    ((:number __number) 0)
    )
   (send-super :init)
   (setq _number (round __number))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:serialization-length
   ()
   (+
    ;; int32 _number
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _number
       (write-long _number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _number
     (setq _number (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass robot_1::OddEvenCheckResponse
  :super ros::object
  :slots (_answer ))

(defmethod robot_1::OddEvenCheckResponse
  (:init
   (&key
    ((:answer __answer) "")
    )
   (send-super :init)
   (setq _answer (string __answer))
   self)
  (:answer
   (&optional __answer)
   (if __answer (setq _answer __answer)) _answer)
  (:serialization-length
   ()
   (+
    ;; string _answer
    4 (length _answer)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _answer
       (write-long (length _answer) s) (princ _answer s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _answer
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _answer (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass robot_1::OddEvenCheck
  :super ros::object
  :slots ())

(setf (get robot_1::OddEvenCheck :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get robot_1::OddEvenCheck :datatype-) "robot_1/OddEvenCheck")
(setf (get robot_1::OddEvenCheck :request) robot_1::OddEvenCheckRequest)
(setf (get robot_1::OddEvenCheck :response) robot_1::OddEvenCheckResponse)

(defmethod robot_1::OddEvenCheckRequest
  (:response () (instance robot_1::OddEvenCheckResponse :init)))

(setf (get robot_1::OddEvenCheckRequest :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get robot_1::OddEvenCheckRequest :datatype-) "robot_1/OddEvenCheckRequest")
(setf (get robot_1::OddEvenCheckRequest :definition-)
      "int32 number
---
string answer

")

(setf (get robot_1::OddEvenCheckResponse :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get robot_1::OddEvenCheckResponse :datatype-) "robot_1/OddEvenCheckResponse")
(setf (get robot_1::OddEvenCheckResponse :definition-)
      "int32 number
---
string answer

")



(provide :robot_1/OddEvenCheck "4ff0b0ab1ed04611e3a2b4090af9ee4f")


