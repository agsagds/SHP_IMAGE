#include "Pixel.h"
#include "lodepng.h"
#include <vector>


class Image
{   private:
        int w,h;
        vector <Pixel> pixels;
    public: 
        Image():w(0),h(0){}
        Image(int w, int h):w(w),h(h) {}
        Image(int w, int h, vector<Pixel> v):w(w), h(h) {}
        Image(int w, int h, vector<unsigned char> v){}

        Image(const Image & im):w(im.w),h(im.h),pixels(im.pixels){}



};