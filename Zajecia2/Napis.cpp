#include "Napis.h"


using namespace std;


//Napis::Napis()
//{
//}

Napis::Napis(const char * nap = "")
{
	m_pszNapis = new char(*nap);
}

Napis::Napis(const Napis & wzor)
{
	this->m_pszNapis = new char(*wzor.m_pszNapis);
	this->m_nDl = wzor.m_nDl;
}

Napis::~Napis()
{
	delete m_pszNapis;
}

const char * Napis::Zwroc() const
{
	return m_pszNapis;
}

void Napis::Ustaw(const char * nowy_napis)
{
	m_nDl = strlen(nowy_napis);
	m_pszNapis = new char[m_nDl];
	//TODO: SKONCZ
}

void Napis::Wypisz() const
{
	cout << m_pszNapis;
}

//Co gdy dluzsze, krotsze
void Napis::Wpisz()
{
	cin >> m_pszNapis;
}

int Napis::SprawdzNapis(const char * por_napis) const
{
	std::string nowy = por_napis;
	std::string klasowy = m_pszNapis;

	return nowy.compare(klasowy);
}

int Napis::Dlugosc()
{
	return strlen(m_pszNapis);
}

Napis & Napis::operator=(const Napis & wzor)
{
	Napis d(wzor);
	return d;
}

bool Napis::operator==(const Napis & wzor) const
{
	if (!SprawdzNapis(wzor.m_pszNapis) && m_nDl == wzor.m_nDl)
		return true;
	return false;
}

ostream & operator<<(ostream & wy, const Napis & p)
{
	return wy << p.m_pszNapis;
}

istream & operator >> (istream & we, Napis & p)
{
	we >> p.m_pszNapis;
	p.m_nDl = p.Dlugosc();
	return we;
}
