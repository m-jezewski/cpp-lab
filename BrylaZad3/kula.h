
#pragma once
#include "bryla.h"
using namespace std;

class Kula : public Bryla
{
private:
	double promien;
public:
	Kula(string n="Kula", double r = 0);
	double obliczObjetosc() const;
	void wyswietl() const;
	void zmienPromien(double r);
};

