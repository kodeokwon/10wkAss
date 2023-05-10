#include <iostream>
#include <fstream>
using namespace std;

void main() {

	float A[12] = { 0., 5., 10., 15., 15., 18., 21., 18., 14., 9., 4., 0. };

	ofstream khu;
	khu.open("sp2.txt");
	khu.write((char*)A, 12*sizeof(float));
	khu.close();



}


