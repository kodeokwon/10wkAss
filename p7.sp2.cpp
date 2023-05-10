#include <iostream>
#include <fstream>
using namespace std;


class CITY {
public:
	CITY() {};
	float getF(float c) { return (c + 9. / 5. + 32.0); }
	float getC(float f) { return ((f - 32.0) * 5. / 9.); }
	float CF[12] = { 0., 5., 10., 15., 15., 18., 21., 18., 14., 9., 4., 0. };
};
/*
void main() {
	CITY ct;
	for (int i = 0; i < 12; i++) {       //C로 표현
		cout << dec << ct.CF[i] << endl;
	}
	for (int i = 0; i < 12; i++) {            //F로 표현
		cout << dec << ct.getF(ct.CF[i]) << endl;
	}
}*/