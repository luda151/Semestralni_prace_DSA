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

		const static int velikostPole = 50;
		string films[velikostPole];
		string tmp;
		int pozice;
		string updatePrvku;
		string novyNazev;
		string hledanyPrvek;

		void addFilm()
		{
			cin >> tmp;
			for (int i = 0; i < velikostPole; i++)
			{
				if (films[i] == "")
				{
					films[i] = tmp;
					i = velikostPole;
				}
			}
		}

		void setName()
		{
			cin >> updatePrvku;
			for (int i = 0; i < velikostPole; i++)
			{
				if (films[i] == updatePrvku)
				{ 
					cout << "Prvek " << updatePrvku << " nalezen: " << "." << endl;
					cout << "Zadejte nový název: " << endl;
					cin >> novyNazev;
					films[i] = novyNazev;
				}
			}
			cout << "Film nenalezen." << endl;
		}
	
		void zobrazFilmy()
		{
			for (int i = 0; i < velikostPole; i++)
			{
				if (films[i] != "")
				{
					cout << films[i] << endl;
				}
			}
		}
		void seradSestupne()
		{
			sort(films, films + velikostPole);

		}
		
		void seradVzestupne()
		{
			sort(films, films + velikostPole);
			reverse(films, films + velikostPole);
		}

		void vypisFiltr()
		{
			cin >> hledanyPrvek;
			for (int i = 0; i < velikostPole; i++)
			{
				if (films[i] != "" && films[i].find(hledanyPrvek))
				{
					cout << films[i] << endl;
				}
			}
			find(films, films + velikostPole, hledanyPrvek);
		}
		bool existujeFilm(string film)
		{
			return 1;
		}

};

	Films::~Films()
	{
	}
