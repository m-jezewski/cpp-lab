
#pragma once
#include <string>
using namespace std;

class Bryla
{
private:
	const string nazwa;
public:
	Bryla(string n = "?");
	virtual double obliczObjetosc() const;
	virtual void wyswietl() const;
	virtual const string& kimJestes() const final;
};
