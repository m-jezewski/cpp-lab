#include <iostream>
#include "bryla.h"
#include "kula.h"
#include "czworoscianforemny.h"
#include <math.h>

int main()
{
	Kula k("k", 1);
	CzworoscianForemny c("c", sqrt(2));
	Bryla* b = &k;
	cout << "Kula: " << endl;
	cout << "b->kimJestes() : " << b->kimJestes() << endl;
	cout << "b->obliczObjetosc() : " << b->obliczObjetosc() << endl;
	b->wyswietl();

	b = &c;
	cout << "Czworoscian Foremny: " << endl;
	cout << "b->kimJestes() : " << b->kimJestes() << endl;
	cout << "b->obliczObjetosc() : " << b->obliczObjetosc() << endl;
	b->wyswietl();

	k.zmienPromien(2);
	cout << "Po zmianie promienia kuli na 2: " << endl;
	k.wyswietl();

}
