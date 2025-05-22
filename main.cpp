#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include<opencv2/highgui/highgui.hpp>
#include <typeinfo>
#include <bitset>

#include "./encode.h"

using namespace std;

cv::Mat fullWhiteImage = cv::imread("./full_white_image.png");

cv::Mat TwoColorsImage = cv::imread("./two_colors_image.png");

const string message = "HelloQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ!";


void displayImage(cv::Mat image){
    cv::imshow("qwertyu",image);
    cv::destroyWindow("Photoframe");//close the window and release allocate memory
    cv::waitKey(0);//wait until user press any key
}



void printRGBValues(cv::Mat image){

    int i, j;

    for(i = 0; i < image.size[0]; i ++)
        for(j = 0; j < image.size[1]; j ++){
            cv::Vec3b pixel = image.at<cv::Vec3b>(i, j);
            uchar blue = pixel[0];
            uchar green = pixel[1];
            uchar red = pixel[2];
            cout << "Pixel (" << i << ", " << j << "): B=" << (int)blue << ", G=" << (int)green << ", R=" << (int)red << endl;
        }


}


int main(){
    if (fullWhiteImage.empty())
        cout << "Image can't be open by OpenCV\n";
    else{
        cout << "Image can be open by OpenCV\n";

        // cout << fullWhiteImage.size;
    }

    
    // printRGBValues(TwoColorsImage);


    cv::imshow("qwertyu",fullWhiteImage);
    cv::destroyWindow("Photoframe");//close the window and release allocate memory//
    cv::waitKey(0);//wait till user press any key

    encode(fullWhiteImage, message);
    

}