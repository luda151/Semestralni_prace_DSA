#pragma once
#include <iostream>
#include "Knihovna.h"
using namespace std;

/*
Add() - Přidá nový prvek.
Clear() - Vymaže všechny prvky.
Contains() - Vrátí true, pokud obsahuje daný prvek.
Delete() - Vymaže daný prvek.
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
		if (film[i].nazev != "")
		{
			pocet++;
		}
	}
	return pocet;
}

void addFilm(Films film[],string tmp)
{
	int pocet = CountNotNullFilm(film, velikost);
	if (pocet < velikost)
	{
		for (int i = 0; i < velikost; i++)
		{
			if (film[i].nazev == "" && tmp != "")
			{
				film[i].nazev = tmp;
				break;
			}
		}
	}
	else
	{
		//resize();
		addFilm(film, tmp);
	}
}

void zobrazFilmy(Films film[])
{
	for (int i = 0; i < velikost; i++)
		{
			if (film[i].nazev != "")
			{
				cout << film[i].nazev << endl;
			}
		}
	}

void updateName(Films film[])
{
	cin >> tmp;
	cout << "Zadej nový název" << endl;
	cin >> tmp2;
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].nazev == tmp)
		{
			film[i].nazev = tmp2;
		}
	}
}

void Delete(Films film[])
{
	cin >> tmp;
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].nazev == tmp)
		{
			film[i].nazev = "";
		}
	}
}

bool Contains(Films film[], string string)
{
	for (int p = 0; p < velikost; p++)
	{
		if (film[p].nazev.size() > string.size())
		{
			return false;
		}

		for (int i = 0; i < string.size(); i++) {
			int j = 0;
			if (string[i] == film[i].nazev[j]) {
				int k = i;
				while (string[i] == film[i].nazev[j] && j < film[i].nazev.size()) {
					j++;
					i++;
				}
				if (j == film[i].nazev.size())
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

string Find(Films film[], string string)
{
	for (int p = 0; p < velikost; p++)
	{
		if (film[p].nazev.size() > string.size())
		{
			break;
		}

		for (int i = 0; i < string.size(); i++) {
			int j = 0;
			if (string[i] == film[i].nazev[j]) {
				int k = i;
				while (string[i] == film[i].nazev[j] && j < film[i].nazev.size()) {
					j++;
					i++;
				}
				if (j == film[i].nazev.size())
				{
					tmp += film[p].nazev;
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

// todo
void resize(int*& a, int& n)
{
	int new_n = 2 * n;
	int* new_a = new int[new_n];
	copy(a, a + n, new_a);
	delete[] a;
	a = new_a;
	n = new_n;
}

bool Exist

(Films film[], string tmp)
{
	for (int i = 0; i < velikost; i++)
	{
		if (film[i].nazev == tmp)
		{
			return true;
		}
	}
	return false;	
}
void Reverse(Films film[])
{
	int pocet = CountNotNullFilm(film, velikost);
	for (int i = 0, l = (pocet - 1); i < (pocet - 1); i++, l--)
	{
		if (i < l) {
			string z = film[i].nazev;
			film[i].nazev = film[l].nazev;
			film[l].nazev = z;
		}
	}

}

//sort reverse 0-1 sezstupně vzestupně
void Sort(Films film[], int reverse)
{
	//kdyz mas jak pocet bodu je seřazeno
	bool muzesVen = false;
	int pocet = CountNotNullFilm(film, velikost);
	while (muzesVen == false) {
		int bod = 0;
		for (size_t i = 0; i < 9; i++)
		{
			if (i != pocet && film[i].nazev > film[(i + 1)].nazev)
			{
				bod = bod + 1;
			}
			else
			{
				string x = film[i].nazev;
				film[i].nazev = film[(i + 1)].nazev;
				film[(i + 1)].nazev = x;
			}
		}
		if (bod >= pocet) {
			muzesVen = true;
		}
	}
	if (reverse == 0)
	{
		Reverse(film);
	}
}

