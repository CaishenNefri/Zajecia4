#include "ListaPracownikow.h"

//Instrukcja: https://www.p-programowanie.pl/cpp/lista-jednokierunkowa-c/


ListaPracownikow::ListaPracownikow() :
	m_pPoczatek(nullptr),
	m_nLiczbaPracownikow(0)
{
	/*m_pPoczatek = nullptr;
	m_nLiczbaPracownikow = 0;*/
}


ListaPracownikow::~ListaPracownikow()
{
}

//TODO: zrob funkcja dodajaca rosnoco elementy
void ListaPracownikow::Dodaj(const Pracownik & p)
{
	Pracownik *nowy, *glowa;
	nowy = new Pracownik(p);
	glowa = m_pPoczatek;

	if (m_nLiczbaPracownikow == 0)
	{
		m_pPoczatek = nowy;
	}
	else
	{
		while (1)
		{
			if ((glowa->Porownaj(p) == 0))
			{
				cout << endl << "WARNING: Nie mozna dodac tego samego pracownika" << endl;
				return;

			}
			if (glowa->Porownaj(p) > 0)
			{
				nowy->m_pNastepny = m_pPoczatek;
				m_pPoczatek = nowy;
				break;
			}


			if (glowa->m_pNastepny == nullptr)
			{
				nowy->m_pNastepny = glowa->m_pNastepny;
				glowa->m_pNastepny = nowy;
				break;
			}

			if ((glowa->m_pNastepny->Porownaj(p) > 0))
			{
				nowy->m_pNastepny = glowa->m_pNastepny;
				glowa->m_pNastepny = nowy;
				break;
			}

			glowa = glowa->m_pNastepny;
		}

	}

	m_nLiczbaPracownikow++;
}

void ListaPracownikow::Usun(const Pracownik & wzorzec)
{

}

void ListaPracownikow::WypiszPracownikow() const
{
	Pracownik *wskaznik = m_pPoczatek;
	while (wskaznik->m_pNastepny != nullptr)
	{
		wskaznik->Wypisz();
		wskaznik = wskaznik->m_pNastepny;
	}
	wskaznik->Wypisz();
}

const Pracownik * ListaPracownikow::Szukaj(const char * nazwisko, const char * imie) const
{
	Pracownik *wskaznik = m_pPoczatek;
	if (wskaznik != nullptr)
	{
		do
		{
			if (!wskaznik->SprawdzImie(imie) && !wskaznik->SprawdzNazwisko(nazwisko))
				return wskaznik;
		} while ((wskaznik = wskaznik->m_pNastepny) != nullptr);
	}

	return nullptr;
}
