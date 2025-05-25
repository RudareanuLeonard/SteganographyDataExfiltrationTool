#include "./encode.h"

using namespace std;


int binaryOp(bitset<8> v1, bitset<8> v2){
    
    v1[7] = v2[7];

    int intV1 = (int)v1.to_ulong();

    return intV1;
    
}


// cv::Vec3b pixel = image.at<cv::Vec3b>(j, k);

// image.at<cv::Vec3b>(j, k) = pixel;

void encode(cv::Mat &image, string message){

    int i = 0;
    int j, k;

    j = k = 0;

    while(i < message.length()){
        int cnt = 0;


        while(j < image.size[0] && i < message.length()){
            while(k < image.size[1] && i < message.length()){
                std::bitset<8> charBinary = toBinary(message[i]);
                cout << "char = " << message[i] << " ";
                cout << "charBinary = " << charBinary << "\n\n";
                for(int b = 7; b >= 0; b --){
                cv::Vec3b pixel = image.at<cv::Vec3b>(j, k);
                int red = pixel[2];
                std::bitset<8> redBinary = toBinary(red);
                int res = binaryOp(charBinary, redBinary);
                pixel[2] = res;
                charBinary = charBinary << 1;
                cout << "charBinary after right shift = " << charBinary << "\n\n";
                cout << "res = " << res << endl;
                image.at<cv::Vec3b>(j, k) = pixel;
                k += 1;
                
            }

                i = i + 1;
            }
            j += 1;
        }
        
            
    }

}