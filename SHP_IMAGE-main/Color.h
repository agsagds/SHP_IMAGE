typedef unsigned char uchar;
#define RED 0xff0000
#define GREEN 0x00ff00
#define BLUE 0x0000ff
#define WHITE 0xffffff
#define BLACK 0x000000
class Color{
public:
	uchar R,G,B,A;
	Color():R(0), G(0),B(0), A(0){}
	Color(unsigned long a):R(a>>16),G(a>>8),B(a),A(255){}
	Color(uchar R, uchar G, uchar B, uchar A=255):
		R(R),G(G),B(B),A(A){}
	Color(const Color& c):R(c.R),G(c.G),B(c.B),A(c.A){}
	
	void setColor(unsigned long a){
		setColor(a>>16,a>>8,a);
	}
	void setColor(uchar R, uchar G, uchar B, uchar A=255){
		this->R=R;
		this->G=G;
		this->B=B;
		this->A=A;
	}
	void setColor(const Color& c){
		setColor(c.R,c.G,c.B,c.A);
	}
};