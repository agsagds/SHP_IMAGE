#include"Point.h"
#include"Color.h"
class Pixel{
private:
	Color c;
	Point p;
public:
	Pixel():c(),p(){}
	Pixel(Color c, Point p):c(c),p(p){}
	Pixel(const Pixel& pix):c(pix.c),p(pix.p){}
	Color getColor(){return c;}
	int getX(){return p.x;}
	int getY(){return p.y;}
	void setColor(Color c){this->c=c;}
	void setPos(int x,int y){p.x=x; p.y=y;}
};