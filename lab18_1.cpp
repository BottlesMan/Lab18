#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double W1,H1,W2,H2,L1,L2;
	W1 = R1.x+R1.w;
	H1 = R1.y-R1.h;
	W2 = R2.x+R2.w;
	H2 = R2.y-R2.h;
	L1 = min(W1,W2) - max(R1.x,R2.x);
	L2 = min(R1.y,R2.y) - max(H1,H2);
	if(L1 < 0 || L2 < 0){
		return 0;
	}else{
		return L1*L2;
	}

}
