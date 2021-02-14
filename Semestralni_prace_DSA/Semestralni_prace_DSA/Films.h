#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Films
{
	public:
		~Films();

		const static int velikostPole = 10;
		string films;
		string tmp;
		int pozice;
		string updatePrvku;
		string novyNazev;
		string hledanyPrvek;

		void setName()
		{
			cin >> updatePrvku;
			for (int i = 0; i < velikostPole; i++)
			{
				if (films == updatePrvku)
				{ 
					cout << "Prvek " << updatePrvku << " nalezen: " << "." << endl;
					cout << "Zadejte nový název: " << endl;
					cin >> novyNazev;
					films = novyNazev;
				}
			}
			cout << "Film nenalezen." << endl;
		}
	
		
		void seradSestupne()//uprav funkci
		{
			//sort(films, films + velikostPole);

		}
		
		void seradVzestupne()
		{
			//sort(films, films + velikostPole);
			//reverse(films, films + velikostPole);
		}

		void vypisFiltr()
		{
			cin >> hledanyPrvek;
			for (int i = 0; i < velikostPole; i++)
			{
				if (films != "" && films.find(hledanyPrvek))
				{
					cout << films << endl;
				}
			}
			//find(films, films + velikostPole, hledanyPrvek);
		}
		bool existujeFilm(string film)
		{
			return 1;
		}

};

	Films::~Films()
	{
	}
