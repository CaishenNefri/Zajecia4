#pragma once
#include "Pracownik.h"
class ListaPracownikow
{
public:
	ListaPracownikow(); //done
	~ListaPracownikow();

	void Dodaj(const Pracownik& p);
	void Usun(const Pracownik& wzorzec);
	void WypiszPracownikow() const; //done
	const Pracownik* Szukaj(const char* nazwisko, const char* imie) const; //done

private:
	Pracownik* m_pPoczatek;
	int m_nLiczbaPracownikow;
};