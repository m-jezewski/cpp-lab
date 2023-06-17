#include <iostream>
#include <vector>

#include "mieszkaniePodstawowe.h";

using namespace std;

#pragma once
class TablicaOgloszen
{
private:
	vector<MieszkaniePodstawowe> mieszkania;

public:
	void operator+=(const MieszkaniePodstawowe& mieszkanie);
	double obliczSredniaCene() const;
	void wyswietl() const;
};

