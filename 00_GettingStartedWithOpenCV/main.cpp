#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(void){
    cv::Mat img;
    img = cv::imread("images/image00000.jpg");
    cv::imshow("title",img);
    cv::waitKey(0);
    cv::destroyWindow("title");
    return 0;
}
