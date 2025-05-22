#include <iostream>
#include <string>
#include <bitset>
#include "opencv2/imgcodecs.hpp"
#include<opencv2/highgui/highgui.hpp>
#include <typeinfo>
using namespace std;

template <typename T>
std::bitset<8> toBinary(T c) {
    return std::bitset<8>(static_cast<int>(c));
}

int modifyValue(int val);

int binaryOp(bitset<8> v1, bitset<8> v2);

void encode(cv::Mat &image, string messages);

