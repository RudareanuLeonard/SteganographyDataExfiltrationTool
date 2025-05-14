#include <iostream>
// #include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include<opencv2/highgui/highgui.hpp>
#include <typeinfo>


using namespace std;

cv::Mat fullWhiteImage = cv::imread("./full_white_image.png");

cv::Mat TwoColorsImage = cv::imread("./two_colors_image.png");


void displayImage(cv::Mat image){
    cv::imshow("qwertyu",image);
    cv::destroyWindow("Photoframe");//close the window and release allocate memory
    cv::waitKey(0);//wait until user press any key
}


int main(){
    if (fullWhiteImage.empty())
        cout << "Image can't be open by OpenCV\n";
    else{
        cout << "Image can be open by OpenCV\n";

        // cout << fullWhiteImage.size;
    }

    cv::imshow("qwertyu",fullWhiteImage);
    cv::destroyWindow("Photoframe");//close the window and release allocate memory//
    cv::waitKey(0);//wait till user press any key

}