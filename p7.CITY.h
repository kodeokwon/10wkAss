#pragma once
#include "p5.FC.h"
#include <fstream>
using namespace std;
class CITY {
public:
	//constructor
	CITY() {};
	CITY(char* nam);

	//member data
	ofstream outf;
	FC CF[12];
	FC FC[12];

	//member function
	void celS();
	void celN();
	void celL();
	void celP();

	void tempS();
	void tempN();
	void tempL();
	void tempP();

	void writeF(CITY* a);
	void writeC(CITY* b);
};
