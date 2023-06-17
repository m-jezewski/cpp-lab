#pragma once

class MieszkaniePodstawowe
{
	friend class TablicaOgloszen;
protected:
	double cena;
	int pietro;
	double powierzchnia;
public:
	MieszkaniePodstawowe(double cena = 0, int pietro = 0, double powierzchnia = 0);
	void wyswietl() const;
};

