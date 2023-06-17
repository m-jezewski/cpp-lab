
#include "czworoscianforemny.h"
#include <math.h>
#include <iostream>

CzworoscianForemny::CzworoscianForemny(string n, double dlugoscKrawedzi) : Bryla(n)
{
	if (dlugoscKrawedzi < 0) {
		a = 0;
	}
	else {
		a = dlugoscKrawedzi;
	}
}

double CzworoscianForemny::obliczObjetosc() const
{
	return a * a * sqrt(3);
}

void CzworoscianForemny::wyswietl() const
{
	cout << "Czworoscian foremny " << kimJestes() << ", o krawedzi a " << a << endl;
}

void CzworoscianForemny::zmienKrawedz(double dlugoscKrawedzi)
{
	if (dlugoscKrawedzi < 0) {
		a = 0.0;
	}
	else {
		a = dlugoscKrawedzi;
	}
}

