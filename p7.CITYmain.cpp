#include <iostream>
#include <fstream>
#include "p7.CITY.h"
using namespace std;
int main() {
	CITY cities[4];

	cities[0].tempS();  //SEOUL
	cities[1].tempN();  //NEWYORK
	cities[2].tempL();  //LONDON
	cities[3].tempP();  //PARIS

	for (int i = 0; i < 12; i++) {
		cout << cities[0].CF[i].c << "  " << cities[1].CF[i].c
			<< "  " << cities[2].CF[i].c << "  " << cities[3].CF[i].c << endl;
	}

	for (int i = 0; i < 12; i++) {
		cout << cities[0].FC[i].f << "  " << cities[1].FC[i].f
			<< "  " << cities[2].FC[i].f << "  " << cities[3].FC[i].f << endl;
	}

	CITY cityTemp1((char*)"faren.txt");
	cityTemp1.writeF(cities);
	CITY cityTemp2((char*)"cel.txt");
	cityTemp2.writeC(cities);
}