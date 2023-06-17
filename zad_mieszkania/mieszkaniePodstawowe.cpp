#include "mieszkaniePodstawowe.h"
#include <iostream>
using namespace std;

MieszkaniePodstawowe::MieszkaniePodstawowe(double cena, int pietro, double powierzchnia)
{
	if (cena < 0) {
		this->cena = 0;
	}
	else {
		this->cena = cena;
	}

	if (powierzchnia < 0) {
		this->powierzchnia = 0;
	}
	else {
		this->powierzchnia = powierzchnia;
	}

	if (pietro < 0) {
		this->pietro = 0;
	}
	else if (pietro > 15) {
		this->pietro = 15;
	}
	else {
		this->pietro = pietro;
	}
}

void MieszkaniePodstawowe::wyswietl() const
{
	cout << "MIESZKANIE: \t" << "cena m2:" << cena << " zl\t\t" << "pietro:" << pietro << "\tpowierzchnia:" << powierzchnia << " m2" << endl;
}