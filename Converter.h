#include "Image.h"
#include "Color.h"
#include "Pixel.h"
class Converter{
public:
	static Image toGRAY(const Image& im){
		Image im_gr(im.width, im.height);
		for(auto px:im.pixels)
		{
			unsigned char md=i.getColor().R+i.getColor().G+i.getColor().B;
			im_gr.setPixel()
		}
	}
	
}

Converter::