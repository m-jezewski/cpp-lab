
#include "bryla.h"
#include <iostream>

Bryla::Bryla(string n) : nazwa(n) {}

double Bryla::obliczObjetosc() const
{
	return 0.0;
}

void Bryla::wyswietl() const
{
}

const string& Bryla::kimJestes() const
{
	return nazwa;
}

