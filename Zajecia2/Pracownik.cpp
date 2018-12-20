#include "Pracownik.h"



Pracownik::Pracownik() :
	m_pNastepny(nullptr)
{
}


Pracownik::~Pracownik()
{
}

const char * Pracownik::Imie() const
{
	return m_Imie.Zwroc();
}

const char * Pracownik::Nazwisko() const
{
	return m_Nazwisko.Zwroc();
}

void Pracownik::Imie(const char * nowe_imie)
{
	m_Imie.Ustaw(nowe_imie);
}

void Pracownik::Nazwisko(const char * nowe_nazwisko)
{
	m_Nazwisko.Ustaw(nowe_nazwisko);
}

void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok)
{
	m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
}

void Pracownik::Wypisz() const
{
	cout << m_Imie.Zwroc() << '\t' << m_Nazwisko.Zwroc() << '\t';
	m_DataUrodzenia.Wypisz();
}

void Pracownik::Wpisz()
{
	std::cout << "\nWpisz imie: ";
	m_Imie.Wpisz();
	std::cout << "\nWpisz nazwisko: ";
	m_Nazwisko.Wpisz();
	std::cout << "\nWpisz date urodzenia: ";
	m_DataUrodzenia.Wpisz();

}

int Pracownik::SprawdzImie(const char * por_imie) const
{
	return m_Imie.SprawdzNapis(por_imie);
}

int Pracownik::SprawdzNazwisko(const char * por_nazwisko) const
{
	return m_Nazwisko.SprawdzNapis(por_nazwisko);
}


int Pracownik::Porownaj(const Pracownik & wzorzec) const
{
	int I, N, D;
	I = SprawdzImie(wzorzec.m_Imie.Zwroc());
	N = SprawdzNazwisko(wzorzec.m_Nazwisko.Zwroc());
	D = m_DataUrodzenia.Porownaj(wzorzec.m_DataUrodzenia);

	if (!I && !N && !D)
		return 0;

	if (N > 0)
		return 1;
	else if (N<0) return -1;
	if (I > 0)
		return 1;
	else if (I<0) return -1;
	if (D > 0)
		return 1;
	else if (D<0) return -1;


	cout << "ERROR: Metoda Pracownik:Porownaj nie powinna tu trafic!!\n";
	return 0;
}