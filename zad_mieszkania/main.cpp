#include <iostream>
#include <cstdlib>


#include "tablicaOgloszen.h"
#include "mieszkaniePodstawowe.h"


using namespace std;

double randD(double min, double max) {
	double randDouble = (double)rand() / RAND_MAX;
	return min + randDouble * (max - min);
}

int main()
{
	TablicaOgloszen t;

	for (int i = 0; i < 15; i++)
	{
		double cena = randD(5000, 8000);
		double pietro = rand() % 15;
		double powierzchnia = randD(15, 100);

		t += MieszkaniePodstawowe(cena, pietro, powierzchnia);
	}

	t.wyswietl();
	cout << "Srednia cena za m2 wynosi: " << t.obliczSredniaCene() << " zl.";
}