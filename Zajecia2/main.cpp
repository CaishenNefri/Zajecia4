#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"
#include "ListaPracownikow.h"


int main()
{
	Data data(01, 03, 2000);
	cout << data << endl;
	cin >> data;
	cout << data;
}


//int main()
//{
//	Pracownik nowy;
//	ListaPracownikow lista;
//
//	cout << endl << "Dodawanie pracownikow:";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << endl << i;
//		nowy.Wpisz();
//		lista.Dodaj(nowy);
//	}
//
//	cout << endl << "Wypisywanie pracownikow:" << endl;
//	lista.WypiszPracownikow();
//
//
//	cout << endl << endl << "Szukanie pracownika" << endl;
//	const Pracownik *wsk = lista.Szukaj("Bielak", "Rafal");
//	if (wsk != nullptr)
//		wsk->Wypisz();
//
//	wsk = lista.Szukaj("Terefere", "Rafal");
//	if (wsk != nullptr)
//		wsk->Wypisz();
//	return 0;
//}

//int main()
//{
//	//Dodaj pracownika z klawiatury
//	Pracownik nowy, stary;
//	printf("\nWprowadzanie danych: \n");
//	nowy.Wpisz();
//	printf("\nWypisywanie wprowadzonych danych: \n");
//	nowy.Wypisz();
//
//	/*std::cout << "Porownaj: \n";
//	std::cout << nowy.SprawdzImie("Test") << endl;
//	std::cout << nowy.SprawdzImie("Dupa") << endl;*/
//
//
//	//Testy klasy napis
//		cout << "-------Test klasy napis---------------";
//		Napis napis;
//		cout << "\n\t Wprowadzenia napisu: ";
//		napis.Wpisz();
//		cout << "\n\t Wypisz wprowadzony napis: ";
//		napis.Wypisz();
//
//		cout << "\nTest1:\n";
//		cout << napis.SprawdzNapis("aest") << endl;
//		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
//		cout << napis.SprawdzNapis("Tesadsadsd") << endl;
//
//		cout << "\nTest2:\n";
//		napis.Ustaw("Tescik");
//		cout << napis.SprawdzNapis("aest") << endl;
//		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
//		cout << napis.SprawdzNapis("Tesadsadsd") << endl;
//	////////////////////////////////////////////////////////
//		
//		printf("\nWprowadzanie danych: \n");
//		stary.Wpisz();
//		printf("\nWypisywanie wprowadzonych danych: \n");
//		stary.Wypisz();
//
//		cout << "\nPorownanie dwoch pracownikow: " << nowy.Porownaj(stary) << endl;
//		cout << "\nPorownanie dwoch pracownikow: " << stary.Porownaj(stary) << endl;
//		cout << "\nPorownanie dwoch pracownikow: " << stary.Porownaj(nowy) << endl;
//	return 0;
//}