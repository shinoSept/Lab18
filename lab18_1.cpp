#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2) {
	Rect R3;
	R3.x = max(R1.x,R2.x);
	R3.y = min(R1.y,R2.y);
	R3.w = min(R1.x + R1.w, R2.x + R2.w) - R3.x;
	R3.h = R3.y - max(R2.y - R2.h, R1.y - R1.h);

	if (R3.w <= 0) {return 0;}
	else return R3.w * R3.h;

}

    



