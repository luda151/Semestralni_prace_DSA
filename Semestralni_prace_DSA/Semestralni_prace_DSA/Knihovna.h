#pragma once
#include <iostream>
#include "Knihovna.h"
using namespace std;

void test()
{
	cout << "Ahoj svete" << endl;
}

/*
Add() - Přidá nový prvek.
Clear() - Vymaže všechny prvky.
Contains() - Vrátí true, pokud obsahuje daný prvek.
Delete() - Vymaže daný prvek.
Count() - Vrátí počet prvků.
Find() - Vyhledá daný prvek pomocí predikátu (který je, jak již víme, delegátem). Je to velmi jednoduché a efektivní.
Exists() - Vraci true pokud byl nějaký nalezený, jinak false.
Reverse() - Převrátí list tak, aby byl 1. prvek jako poslední a naopak poslední jako první.
Sort() - Setřídí list s parametrem 1 i přepraví pořadí pomocí Reverese.
Resize() - Upraví velikost pole prekopírováním.
CountNotNullFilm() - Vrací počet neprázdných stringu.
Sort() - Seřadí pole s parametrem 1 vraci pořadí obraceně pomocí reverse().
*/

int const velikost = 10;
string tmp;
string tmp2;

int CountNotNullFilm(Films film[], int velikost)
{
	int pocet = 0;
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].films != "")
		{
			pocet = pocet + 1;
		}
	}
	return pocet;
}

void addFilm(Films film[velikost])
{
	cin >> tmp;
	int pocet = CountNotNullFilm(film, velikost);
	if (pocet < velikost)
	{
		for (int i = 0; i < velikost; i++)
		{
			if (film[i].films == "")
			{
				film[i].films = tmp;
				i = velikost;
				cout << "film přidán" << endl;
			}
		}
	}
	else
	{
		//resize();
		addFilm(film);
	}
}

void zobrazFilmy(Films film[velikost])
{
	for (int i = 0; i < velikost; i++)
		{
			if (film[i].films != "")
			{
				cout << film[i].films << endl;
			}
		}
	}

void updateName(Films film[velikost])
{
	cin >> tmp;
	cout << "Zadej nový název" << endl;
	cin >> tmp2;
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].films == tmp)
		{
			film[i].films = tmp2;
		}
	}
}

void Delete(Films film[velikost])
{
	cin >> tmp;
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].films == tmp)
		{
			film[i].films = "";
		}
	}
}

bool Contains(Films film[velikost], string string)
{
	for (int p = 0; p < velikost; p++)
	{
		if (film[p].films.size() > string.size())
		{
			return false;
		}

		for (int i = 0; i < string.size(); i++) {
			int j = 0;
			if (string[i] == film[i].films[j]) {
				int k = i;
				while (string[i] == film[i].films[j] && j < film[i].films.size()) {
					j++;
					i++;
				}
				if (j == film[i].films.size())
				{
					return true;
				}
				else
				{
					i = k;
				}
			}
		}
		return false;
	}
}
		

int Count(string list[])
{
	int a = sizeof(list);
	int b = sizeof(*list);
	int x = a / b;
	return x;
}

string Find(Films film[velikost], string string)
{
	for (int p = 0; p < velikost; p++)
	{
		if (film[p].films.size() > string.size())
		{
			return "";
		}

		for (int i = 0; i < string.size(); i++) {
			int j = 0;
			if (string[i] == film[i].films[j]) {
				int k = i;
				while (string[i] == film[i].films[j] && j < film[i].films.size()) {
					j++;
					i++;
				}
				if (j == film[i].films.size())
				{
					tmp = tmp + film[p].films;
				}
				else
				{
					i = k;
				}
			}
		}
	}
	return tmp;
}

void resize()
{
	;
}

bool Exists(Films film[velikost], string tmp)
{
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].films == tmp)
		{
			return true;
		}
	}
	return false;	
}
//void Reverse(string list[])
//{
//	int pocet = CountNotNull(list, velikost);
//	for (size_t i = 0, l = (pocet - 1); i < (pocet - 1); i++, l--)
//	{
//		if (i < l) {
//			string z = list[i];
//			list[i] = list[l];
//			list[l] = z;
//		}
//	}
//
//}
//
//void Sort(string* list, int reverse)
//{
//	//kdyz mas vic jak pocet bodu muzes ven
//	bool muzesVen = false;
//	int pocet = CountNotNull(list, velikost);
//	while (muzesVen == false) {
//		int bod = 0;
//		for (size_t i = 0; i < 9; i++)
//		{
//			if (i != pocet && list[i] > list[(i + 1)])
//			{
//				bod = bod + 1;
//			}
//			else
//			{
//				string x = list[i];
//				list[i] = list[(i + 1)];
//				list[(i + 1)] = x;
//			}
//		}
//		if (bod >= pocet) {
//			muzesVen = true;
//		}
//	}
//	if (reverse == 0)
//	{
//		Reverse(list);
//	}
//}
