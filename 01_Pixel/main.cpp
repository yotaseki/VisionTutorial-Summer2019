#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(void){
    cv::Mat img;
    cv::Mat empty_img;
    img = cv::imread("images/image00003.jpg");
    empty_img = cv::Mat::zeros(img.rows,img.cols, CV_8UC3);
    cv::imshow("empty",empty_img);
    cv::imshow("img",img);
    cv::moveWindow("img",0,img.rows);
    cv::waitKey(0);
    for(int y=0;y<img.rows;y++){
        for(int x=0;x<img.cols;x++){
            unsigned char B = img.data[y * img.step + x * img.elemSize() + 0];
            unsigned char G = img.data[y * img.step + x * img.elemSize() + 1];
            unsigned char R = img.data[y * img.step + x * img.elemSize() + 2];
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 0] = B;
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 1] = G;
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 2] = R;
            cv::imshow("empty",empty_img);
            cv::waitKey(1);
        }
    }
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
