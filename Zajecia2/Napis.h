#pragma once

#include <iostream>
#include <string.h>

using namespace std;

class Napis
{
public:
	//Napis();
	Napis(const char* nap = "");
	Napis(const Napis & wzor);
	~Napis();

	const char* Zwroc() const;
	void Ustaw(const char* nowy_napis);
	void Wypisz() const;
	void Wpisz();
	int SprawdzNapis(const char* por_napis) const;
	int Dlugosc();

private:
	char *m_pszNapis;
	int m_nDl;

	Napis & operator=(const Napis & wzor);
	bool operator==(const Napis & wzor) const;

	friend ostream & operator<<(ostream & wy, const Napis & p);
	friend istream & operator >> (istream & we, Napis & p);
};

