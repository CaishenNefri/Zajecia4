#pragma once

#include <iostream>

using namespace std;

class Data
{
public:
	Data();
	Data(int d, int m, int r);
	~Data();
	void Ustaw(int d, int m, int r);

	//Metody informacyjne
	int Dzien() const;
	int Miesiac() const;
	int Rok() const;

	void Wypisz() const;
	void Wpisz();

	int Porownaj(const Data & wzor) const;

private:
	int m_nDzien;
	int m_nMiesiac;
	int m_nRok;

	void Koryguj();
	friend std::ostream & operator<<(std::ostream & wy, Data & d);
	friend std::istream & operator>>(std::istream & we, Data & d);
};

