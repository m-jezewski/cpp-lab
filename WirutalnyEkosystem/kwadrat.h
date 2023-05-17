#include "prostokat.h"
#include <iostream>

class Obliczenia {
protected:	const double pi = 3.14;
public:
	virtual double promienKolaWgPola() = 0;
	virtual double promenOkreguWgObwodu() = 0;
	virtual ~Obliczenia();

};

class Kwadrat : public Prostokat, public Obliczenia
{
public:

	Kwadrat(string nazwa = "?", double bok = 0) : Prostokat(nazwa, bok, bok) {}

	~Kwadrat()
	{
		cout << "Kwadrat: " << nazwa << " koñczy dzia³anie" << endl;
	}
	double promienKolaWgPola();
	double promenOkreguWgObwodu();
	string doTekstu();
};