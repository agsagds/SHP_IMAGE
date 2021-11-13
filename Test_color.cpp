#include<iostream>
#include<cassert>
#include "Pixel.h"
using namespace std;
int main()
{
	Color c;
	assert(c.R==0);
	assert(c.G==0);
    assert(c.B==0);
    assert(c.A==0);
	
	c.R=20;
	assert(c.R==20);
	c.G=10;
	assert(c.G==10);
    c.B=12;
	assert(c.B==12);
	c.A=10;
	assert(c.A==10);
	
	 Color c1(66,30,6,255);
	    assert(c1.R==66);
	    assert(c1.G==30);
        assert(c1.B==6);
        assert(c1.A==255);
	
	Color c2(c1);
	    assert(c2.R==c1.R);
        assert(c2.G==c1.G);
        assert(c2.B==c1.B);
        assert(c2.A==c1.A);
	c2.R=77; c2.G=26; c2.B=96; c2.A=254;
	    assert(c1.R==66);
	    assert(c1.G==30);
        assert(c1.B==6);
        assert(c1.A==255);
	
	c.setColor(0xff5533);
	assert(c.R==0xff);
	assert(c.G==0x55);
	assert(c.B==0x33);
	assert(c.A==255);

	
	
	cout<<"Tests complete!"<<endl;
}