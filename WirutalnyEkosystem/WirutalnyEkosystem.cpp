using namespace std;
#include <iostream>
#include "organizm.h"
#include "sasiedztwo.h"
#include "kwadrat.h"

string nazwaRodzaju(RodzajMieszkanca rodzaj) {
	switch (rodzaj) {
	case GLON: return "GLON";
	case GRZYB: return "GRZYB";
	case BAKTERIA: return "BAKTERIA";
	case PUSTKA: return "PUSTKA";
	case SCIANA: return "ŒCIANA";
	case TRUP: return "TRUP";
	case NIEZNANE: return "NIEZNANE";
	}
}

int main()
{
	Kwadrat kwadrat("Kwadrek", 4);
	Prostokat prostokat("Prostak", 2, 4);

	Prostokat& referencjaDoProstokat1 = prostokat;

	cout << referencjaDoProstokat1.doTekstu()
		<< endl << endl;

	Prostokat& referencjaDoProstokat2 = kwadrat;

	cout << referencjaDoProstokat2.doTekstu()
		<< endl << endl;

	return 0;
}
