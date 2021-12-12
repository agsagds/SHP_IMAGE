#include<iostream>
#include<cassert>
#include "Image.h"
using namespace std;
int main(){
    Image image;
    assert(image.width==0); assert(image.height==0);

    image.width=11; image.height=2;
    assert(image.width==11); assert(image.height==2);

    Image image1(image);
    assert(image1.width==11); assert(image1.height==2);


    cout<<"Tests complete!"<<endl; 
}