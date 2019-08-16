#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <vector>

int main(void){
    // face
    cv::CascadeClassifier cascade;
    cascade.load("xml/haarcascade_frontalface_alt.xml");
    std::vector<cv::Rect> faces;
    // camera
    cv::VideoCapture cap(0);
    if(!cap.isOpened()){
        return -1;
    }
    cv::Mat frame;
    while(1){
        // process
        faces.clear();
        cap.read(frame);
        cv::Mat resized_frame;
        cv::resize(frame, resized_frame,cv::Size(640,480));
        cascade.detectMultiScale(resized_frame, faces, 1.1, 3, 0, cv::Size(20,20));
        for(int i = 0; i<faces.size(); i++){
            cv::rectangle(resized_frame, cv::Point(faces[i].x, faces[i].y), cv::Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height), cv::Scalar(0, 0, 255), 3, CV_AA);
        }
        // show or break
        const char key = cv::waitKey(1);
        if(key == 27/*ESC*/){
            break;
        }
        cv::imshow("capture",resized_frame);
    }
    cv::destroyAllWindows();
    return 0;
}
