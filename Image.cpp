#include "Image.h"

Image::Image(): width(0), height(0){}
Image::Image(int width, int height, vector <Pixel> pixels): width(width), height(height), pixels(pixels){}
Image::Image(int width, int height)
{
    throw std::exception();//todo: sdelat
}
Image::Image(const Image& img): width(img.width), height(img.height), pixels(img.pixels){}

Image::Image(string filename)
{
    const char* filein = filename.c_str();
    vector <uchar> image;
    unsigned width, height, w=0, h=0;
    lodepng::decode(image, width, height, filein);
    for(unsigned long long i=0; i<width*height*4; i+=4, w++)
    {
        Color color(image[i], image[i+1], image[i+2], image[i+3]);
        Point point(w/width, w%width+1);
        Pixel pixel(color, point);
        pixels.push_back(pixel);
    }
}


void Image::setPixel(Pixel pixel, unsigned x){
		pixels[x]=pixel;
}

void Image::setPixel(Color c, unsigned x, unsigned y){
    pixels[y*width+x].setColor(c);
}

void Image::setPixel(Pixel pixel){
    pixels[pixel.getY()*width+pixel.getX()]=pixel;
}


Pixel Image::getPixel(unsigned x){
    return pixels[x];
}

Pixel Image::getPixel(unsigned x, unsigned y){
    return pixels[y*width+x];
}

vector<Pixel> Image::getPixels(){
    return pixels;
}


void Image::outputImage(string filename)
{
    vector <uchar> image;
    unsigned width = pixels[pixels.size()-1].getY(), height=pixels[pixels.size()-1].getX();
    for(unsigned long long i=0; i<pixels.size(); i++)
    {
        image.push_back(pixels[i].getColor().R);
        image.push_back(pixels[i].getColor().G);
        image.push_back(pixels[i].getColor().B);
        image.push_back(pixels[i].getColor().A);
    }
    lodepng::encode(filename.c_str(), image, width, height);
}	