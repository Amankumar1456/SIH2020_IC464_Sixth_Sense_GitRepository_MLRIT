## SIH2020_IC464_Sixth_Sense_GitRepository_MLRIT
### Table Of Content
* Introduction
* Prerequisites
* Installation Guide
* Supported Platforms
* Future Development and Direction
## 🗒️Introduction 
The goal of this Project is to detect sign-language gestures performed by the user and display them as text on the screen(Real-time-caption). In order to achieve this, we are using the [MediaPipe](https://google.github.io/mediapipe/) framework for hand-detection and hand-tracking along with our Sign-Language-Detection Calculator to classify the sign-language gestures enacted by the user.We have not gone the traditional way of training the model on thousands of images instead we have appplied Landmark Detection.
# ⚙️Installation

## Prerequisites✔️ : 

Make sure you have mediapipe dependencies installed (refer [here](https://google.github.io/mediapipe/getting_started/install.html) )
Make sure you have a video capture device (like webcam) connected and enabled

## Windows : 

•Clone our repository ```git clone https://github.com/Amankumar1456/SIH2020_IC464_Sixth_Sense_GitRepository_MLRIT.git```

•Change working directory to ```mediapipe\```
```cd mediapipe```

•Build desktop module using Bazel
```bazel build -c opt --define MEDIAPIPE_DISABLE_GPU=1 --action_env PYTHON_BIN_PATH="<path to python executable>" mediapipe/examples/desktop/hand_tracking:hand_tracking_cpu```

•Run command : ```set GLOG_logtostderr=1```

•Run the built module 
```bazel-bin\mediapipe\examples\desktop\hand_tracking\hand_tracking_cpu \ --calculator_graph_config_file=mediapipe/graphs/hand_tracking/hand_tracking_desktop_live.pbtxt```

## Android : 

•Clone our repository ```git clone https://github.com/Amankumar1456/SIH2020_IC464_Sixth_Sense_GitRepository_MLRIT.git```

•Change working directory to ```mediapipe\```
```cd mediapipe```

•Build desktop module using Bazel
```bazel build -c opt --config=android_arm64  --action_env PYTHON_BIN_PATH="<path to python executable>" mediapipe/examples/android/src/java/com/google/mediapipe/apps/handtrackinggpu:handtrackinggpu
```
•Run command : ```set GLOG_logtostderr=1```

•Install the built apk file on any conncected Android device 
```adb install bazel-bin/mediapipe/examples/android/src/java/com/google/mediapipe/apps/handtrackinggpu/handtrackinggpu.apk```

## Solution 📐Architectural Visualization

![Architecture](/Images_Readme/architecture.JPG)

## Cross-platform ML solutions for Sign-to-Text made Simple 

The sign processing machine currently is supprted by the following devices:

![Desktop_img](/Images_Readme/dekstop.png)                                                               | ![Android_img](/Images_Readme/tutorial.png)
:------------------------------------------------------------------------------------------------------------: | :----------------------------------------------------:
**Desktop**: *You can experience the seemless performance right infront of your laptop screen.* | **Android**: *Use the tutorial app to understand the Sign language with user-freindly Interface,have a look below.*

## Implimentation of Machine (In-Action)

Sign Language-to-Text                                                                                                                 | Learn Sign Language                                                                                                       | 
:----------------------------------------------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------------------: |
[![Sign_to_Text](/Images_Readme/sign-text.gif)]| [![Learn_Sign](/Images_Readme/learn.gif)] | 

## Future Development and Direction
* Scale the application for Commonly used Video Conferencing applications.
* Adding Voice feature so that Sign language to Voice is possible.
* Building the Solution on Augmented Reality to view the text in open spacec.
* Add query fullfilment for better usage of technolgy by the Deaf and Mute section of the society.
