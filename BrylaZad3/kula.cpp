#include "kula.h"
#include "bryla.h"
#include <math.h>
#include <iostream>

Kula::Kula(string nazwa, double r) : Bryla(nazwa) {
	if (r < 0) {
		promien = 0;
	}
	else {
		promien = r;
	}
}

double Kula::obliczObjetosc() const
{
	return (4 * 3.1415 * promien * promien * promien) / 3;
}

void Kula::wyswietl() const
{
	cout << "Kula " << kimJestes() << " o promieniu r = " << promien << endl;
}

void Kula::zmienPromien(double r)
{
	if (r < 0) {
		promien = 0;
	}
	else {
		promien = r;
	}
}

