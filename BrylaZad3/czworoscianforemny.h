
#include "bryla.h"
class CzworoscianForemny : public Bryla
{
private:
	double a;
public:
	CzworoscianForemny(string n="Czworoscian foremny", double dlugoscKrawedzi=0);
	double obliczObjetosc() const;
	void wyswietl() const;
	void zmienKrawedz(double dlugoscKrawedzi);
};

