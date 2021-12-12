#ifndef IMAGE_H
#define IMAGE_H
#include "Pixel.h"
#include "lodepng.h"
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <algorithm>

using namespace std;
class Image{
public:
	unsigned int width, height;
	vector <Pixel> pixels;
    
    /*Default constructor*/
	Image();
    
    /*Constructor
        width - width of image
        height - height of image
        pixels - vector of pixels for image. Must contains width*height pixels
        
        Construct Image instance from pixels
    */
	Image(int width, int height, vector <Pixel> pixels);
	
    /*Constructor
        width - width of image
        height - height of image
        
        Construct Image instance from width and height with white pixels
    */
    Image(int width, int height);
    
    /*Constructor
        img - Image instance
       
        Construct Image instance from another
    */
	Image(const Image& img);
    
    /*Constructor
        filename - path to image
       
        Construct Image instance from .png image file
    */
	Image(string filename);
    
    /*setPixel(Pixel pixel, unsigned x);
        pixel - pixel for set
        x - pos of pixel in flat array of pixels
        
        Set pixel in pos x to pixel value
    */
	void setPixel(Pixel pixel, unsigned x);
    
    /*setPixel(Color c, unsigned x, unsigned y);
        c - color 
        x - X pos of pixel in image
        y - Y pos of pixel in image
        
        Set color of pixel in pos (x,y) to c
    */
	void setPixel(Color c, unsigned x, unsigned y);
    
    /*setPixel(Pixel pixel);
        pixel - new val for pixel
        
        Set new val of pixel to pos of pixel
    */
	void setPixel(Pixel pixel);
    
    /*Pixel getPixel(unsigned x);
        x - pos of pixel in flat array of pixels 
        
        return copy of pixel from image in pos x
        
        Returned value: pixel from pos x
    */
	Pixel getPixel(unsigned x);
    
    /*Pixel getPixel(unsigned x, unsigned y);
        x - X pos of pixel in image
        y - Y pos of pixel in image
        
        return copy of pixel from image point (x,y)
        
        Returned value: pixel from point (x,y)
    */
	Pixel getPixel(unsigned x, unsigned y);
    
    /*vector <Pixel> getPixels();
        
        return copy of pixels from image
        
        Returned value: flat array of image pixels
    */
	vector <Pixel> getPixels();
    
    /*outputImage(string filename);
        
        filename - path to image
        
        save image into disk to path
    */
	void outputImage(string filename);
};
#endif