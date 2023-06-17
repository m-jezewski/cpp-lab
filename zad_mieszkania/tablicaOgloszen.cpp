#include "tablicaOgloszen.h"

void TablicaOgloszen::operator+=(const MieszkaniePodstawowe& mieszkanie)
{
	mieszkania.push_back(mieszkanie);
}

double TablicaOgloszen::obliczSredniaCene() const
{
	if (mieszkania.empty()) {
		return 0;
	}

	double totalPrice = 0;

	for (int i = 0; i < mieszkania.size(); i++)
	{
		totalPrice += mieszkania[i].cena;
	}

	double avgPrice = totalPrice / mieszkania.size();
	return avgPrice;
}

void TablicaOgloszen::wyswietl() const
{
	for (int i = 0; i < mieszkania.size(); i++)
	{
		mieszkania[i].wyswietl();
	}
}
