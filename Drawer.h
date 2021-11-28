#include "Shape.h"
#include "Image.h"
public class Drawer{
    static drawShape(Image im, Shape shp){
        for(auto i:shp.getPixels())
            im.setPixel(i);
    }
};