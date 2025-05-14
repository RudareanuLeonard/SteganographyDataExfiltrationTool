#include <iostream>
#include <png++/png.hpp>

using namespace std;


int main(){
    
    png::image< png::rgb_pixel > image("input.png");
    image.write("output.png");
}