#include "p7.CITY.h"
using namespace std;
CITY::CITY(char* nam) {
	outf.open(nam);
	outf << "m" << "  " << "S" << "  " << "N" << "  " <<
		"L" << "  " << "P" << endl;
};
void CITY::celS() {
	CF[0].c = 0.;
	CF[1].c = 5.;
	CF[2].c = 10.;
	CF[3].c = 15.;
	CF[4].c = 15.;
	CF[5].c = 18.;
	CF[6].c = 21.;
	CF[7].c = 18.;
	CF[8].c = 14.;
	CF[9].c = 9.;
	CF[10].c = 4.;
	CF[11].c = 0.;
}
void CITY::celN() {
	CF[0].c = 3.;
	CF[1].c = 4.;
	CF[2].c = 9.;
	CF[3].c = 14.;
	CF[4].c = 20.;
	CF[5].c = 22.;
	CF[6].c = 25.;
	CF[7].c = 18.;
	CF[8].c = 15.;
	CF[9].c = 8.;
	CF[10].c = 2.;
	CF[11].c = 1.;
}
void CITY::celL() {
	CF[0].c = 2.;
	CF[1].c = 7.;
	CF[2].c = 4.;
	CF[3].c = 12.;
	CF[4].c = 22.;
	CF[5].c = 25.;
	CF[6].c = 27.;
	CF[7].c = 19.;
	CF[8].c = 11.;
	CF[9].c = 12.;
	CF[10].c = 6.;
	CF[11].c = 3.;
}
void CITY::celP() {
	CF[0].c = 8.;
	CF[1].c = 3.;
	CF[2].c = 12.;
	CF[3].c = 23.;
	CF[4].c = 24.;
	CF[5].c = 17.;
	CF[6].c = 13.;
	CF[7].c = 9.;
	CF[8].c = 7.;
	CF[9].c = 12.;
	CF[10].c = 4.;
	CF[11].c = 5.;
}
void CITY::tempS() {
	celS();
	for (int i = 0; i < 12; i++) FC[i].f = CF[i].getF();
}
void CITY::tempN() {
	celN();
	for (int i = 0; i < 12; i++) FC[i].f = CF[i].getF();
}
void CITY::tempL() {
	celL();
	for (int i = 0; i < 12; i++) FC[i].f = CF[i].getF();
}
void CITY::tempP() {
	celP();
	for (int i = 0; i < 12; i++) FC[i].f = CF[i].getF();
}

void CITY::writeF(CITY* a) {
	for (int i = 0; i < 12; i++) {
		outf << i + 1 << "  " << a[0].FC[i].f << "  " << a[1].FC[i].f << "  " <<
			a[2].FC[i].f << "  " << a[3].FC[i].f << endl;
	}
}
void CITY::writeC(CITY* b) {
	for (int i = 0; i < 12; i++) {
		outf << i + 1 << "  " << b[0].CF[i].c << "  " << b[1].CF[i].c << "  " <<
			b[2].CF[i].c << "  " << b[3].CF[i].c << endl;
	}
}