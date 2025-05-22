#include "./encode.h"

using namespace std;


int binaryOp(bitset<8> v1, bitset<8> v2){
    
    for(int i = 7; i >= 0; i --)
        v1[i] = v2[i];

    int intV1 = (int)v1.to_ulong();

    return intV1;
    
}

void encode(cv::Mat &image, string message){
    cout << "fasfsd";

    int i = 0;
    int j, k;

    while(message[i] != NULL){
        for(j = 0; j < image.size[0]; j ++)
            for(k = 0; k < image.size[1]; k ++)
                for(int p = 0; p < 3; p ++){
                    cv::Vec3b pixel = image.at<cv::Vec3b>(j, k);
                    int r = pixel[2];
                    int g = pixel[1];
                    int b = pixel[0];

                    if(message[i] != NULL){ // for r
                        std::bitset<8>  rBinary = toBinary(r);
                        std::bitset<8>  charBinary = toBinary(message[i]);

                        // int newR = binaryOp(rBinary, charBinary);
                        int newR = 0;
                        pixel[2] = newR;

                        i = i + 1;


                    }
       


                    if(message[i] != NULL){ // for g
                        std::bitset<8> gBinary = toBinary(g);
                        std::bitset<8> charBinary = toBinary(message[i]);

                        // int newG = binaryOp(gBinary, charBinary);
                        int newG = 0;
                        pixel[1] = newG;

                        i = i + 1;
                    }
        


                    if(message[i] != NULL){ // for b
                        std::bitset<8> bBinary = toBinary(b);
                        std::bitset<8> charBinary = toBinary(message[i]);

                        // int newB = binaryOp(bBinary, charBinary);
                        int newB = 0;
                        pixel[0] = newB;

                        i = i + 1;
                    }

                    image.at<cv::Vec3b>(j, k) = pixel;
          
                }

    }
}