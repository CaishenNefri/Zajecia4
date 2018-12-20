#include "Data.h"

Data::Data() :
	m_nDzien(10),
	m_nMiesiac(10),
	m_nRok(1000)
{
}

Data::Data(int d, int m, int r):
	m_nDzien(d),
	m_nMiesiac(m),
	m_nRok(r)
{
}


Data::~Data()
{
}

void Data::Ustaw(int d, int m, int r)
{
	m_nDzien = d;
	m_nMiesiac = m;
	m_nRok = r;
}

int Data::Dzien() const
{
	return m_nDzien;
}

int Data::Miesiac() const
{
	return m_nMiesiac;
}

int Data::Rok() const
{
	return m_nRok;
}

void Data::Wypisz() const
{
	cout << m_nDzien << "-" << m_nMiesiac << "-" << m_nRok << endl;
}

void Data::Wpisz()
{
	cin >> m_nDzien >> m_nMiesiac >> m_nRok;
	Koryguj();
}

int Data::Porownaj(const Data & wzor) const
{
	// pozniejsza zakladam ze (2000 jest data pozniejsza) niz 1900
	if (m_nDzien == wzor.Dzien() &&
		m_nMiesiac == wzor.Miesiac() &&
		m_nRok == wzor.Rok())
		return 0;

	if (m_nRok < wzor.Rok()) return 1;
	else if (m_nRok > wzor.Rok()) return -1;

	if (m_nMiesiac < wzor.Miesiac()) return 1;
	else if (m_nMiesiac > wzor.Miesiac()) return -1;

	if (m_nDzien < wzor.Dzien()) return 1;
	else if (m_nDzien > wzor.Dzien()) return -1;

	cout << "ERROR: Metoda Data:Porownaj nie powinna tu trafic!!\n";
	return 0;
}

void Data::Koryguj()
{
	//miesiace z 31 dniami: 1 3 5 7 8 10 12
	if (m_nMiesiac == 2)
	{
		if (m_nRok % 4 == 0)
		{
			if (m_nDzien > 29)
				m_nDzien = 29;
		}
		else
		{
			if (m_nDzien > 28)
				m_nDzien = 28;
		}
	}

	if (m_nMiesiac > 12)
		m_nMiesiac = 12;
	else if (m_nMiesiac < 1)
		m_nMiesiac = 1;

	if (m_nMiesiac == (1 | 3 | 5 | 7 | 8 | 10 | 12))
	{
		if (m_nDzien > 31)
			m_nDzien = 31;
	}
	else
	{
		if (m_nDzien > 30)
			m_nDzien = 30;
	}

	if (m_nDzien < 1)
		m_nDzien = 1;
}

std::ostream & operator<<(std::ostream & wy, Data & d)
{
	wy << d.m_nDzien << " " << d.m_nMiesiac << " " << d.m_nRok;
	return wy;
}

std::istream & operator >> (std::istream & we, Data & d)
{
	we >> d.m_nDzien;
	we >> d.m_nMiesiac;
	we >> d.m_nRok;
	return we;
}
