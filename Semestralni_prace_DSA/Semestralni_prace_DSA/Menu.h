#pragma once
#include "Program.h"
#include "Films.h"
#include "File.h"
#include "Menu.h"
#include <iostream>
#include "Knihovna.h"

using namespace std;

class Menu
{
	public:
		Menu();
		~Menu();

		int const static velikost = 10;
		File file;
		Films film[velikost];
		Program program;


		int menu()
		{
			while (1) {
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "Zvolte si operaci:" << endl;
				cout << "1: Evidence filmu" << endl;
				cout << "2: Program" << endl;
				cout << "3: import dat" << endl;
				cout << "4: export dat" << endl;
				cout << "5: konec" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;

				int menu;
				cin >> menu;

				switch (menu)
				{
				case 1:
					menu1();
					break;

				case 2:
					menu2();
					break;

				case 3:
					cout << "3: import filmu" << endl;
					//film = file.importDat();
					cout << "import dat proběhl" << endl;
					break;

				case 4:
					cout << "4: export filmu" << endl;
					//file.exportDat(film);
					//cout << film.films << endl;
					break;

				case 5:
					return 0;
					
				default:
					cout << "Zadej hodnoty mezi 1-5";
					break;
				}
			}
		};

		int menu1()
		{
			while (1) {
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "Evidence filmu" << endl;
				cout << "1: Pridej Film" << endl;
				cout << "2: Uprav film" << endl;
				cout << "3: Odeber film" << endl;
				cout << "4: Zobraz filmy" << endl;
				cout << "5: Serad filmy sestupně ▼" << endl;
				cout << "6: Serad filmy vzestupně ▲" << endl;
				cout << "7: Zobraz filmy s dle filtru" << endl;
				cout << "8: zpet" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;

				int menu1;
				int filter;
				
				cin >> menu1;
				switch (menu1)
				{
				case 1:
					cout << "1: Pridej Film" << endl;
					cout << "zadej název filmu: " << endl;
					addFilm(film);
					break;

				case 2:
					cout << "2: Uprav film" << endl;
					cout << "zadej název filmu který cheš změnit: " << endl;
					updateName(film);
					break;

				case 3:
					cout << "3: Odeber film" << endl;
					cout << "zadej název filmu: " << endl;
					break;

				case 4:
					cout << "4: Zobraz filmy" << endl;
					zobrazFilmy(film);
					break;

				case 5:
					cout << "5: Serad filmy sestupně ▼" << endl;
					//film.seradSestupne();
					break;

				case 6:
					cout << "6: Serad filmy vzestupně ▲" << endl;
					//film.seradVzestupne();
					break;

				case 7:
					cout << "7: Zobraz filmy s dle filtru" << endl;
					cout << "7: Zadej filtr: " << endl;
					//film.vypisFiltr();
					break;
				case 8:
					menu();
					return 0;
					
				default:
					cout << "Zadej hodnoty mezi 1-8";
					break;
				}
			}
		};

		int menu2()
		{
			while (1) {
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "Program kina:" << endl;
				cout << "1: Zobraz program kina" << endl;
				cout << "2: Přiřad film v čas" << endl;
				cout << "3: Odeber film v čas" << endl;
				cout << "4: Zobraz kapacitu filmu" << endl;
				cout << "5: Přidej lidi na film" << endl;
				cout << "6: Odeber lidi z filmu" << endl;
				cout << "7: zpet" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << " " << endl;

				int menu2;
				cin >> menu2;
				switch (menu2)
				{
				case 1:
					cout << "1: Zobraz program kina" << endl;
					program.zobrazProgram(program);
					break;

				case 2:
					cout << "2: Přiřad film v čas" << endl;
					menu3();
					break;

				case 3:
					cout << "3: Odeber film v čas" << endl;
					program.odeberPrizazenyFilm();
					break;

				case 4:
					cout << "4: Zobraz kapacitu filmu" << endl;
					program.zobrazKapacituFilmu();
					break;

				case 5:
					cout << "5: Přidej lidi na film" << endl;
					cout << "Zadej pocet lidi" << endl;
					int suma;
					cin >> suma;
					program.pridejLidiNaFilm(suma);
					break;

				case 6:
					cout << "6: Odeber lidi z filmu" << endl;
					cout << "Zadej pocet lidi" << endl;
					int pocet;
					cin >> pocet;
					program.odeberLidiZFilmu(pocet);
					break;
				case 7:
					return 0;
					menu();
				default:
					cout << "Zadej hodnoty mezi 1-7";
					break;
				}
			}
		}

			Program menu3()
			{
				while (1) {
					cout << "2: Přiřad film v čas" << endl;
					cout << "Vyber den který chceš upravit:" << endl;
					cout << "1: Pondělí" << endl;
					cout << "2: Úterý" << endl;
					cout << "3: Středa" << endl;
					cout << "4: Čtvrtek" << endl;
					cout << "5: Pátek" << endl;
					cout << "6: Sobota" << endl;
					cout << "7: Neděle" << endl;
					cout << "8: Zpět" << endl;
					int menu3;
					cin >> menu3;
					switch (menu3)
					{
					case 1:
						cout << "1: Pondělí" << endl;
						program.den = "Pondělí";
						menu4();
						return program;

					case 2:
						cout << "2: Úterý" << endl;
						program.den = "Úterý";
						menu4();
						return program;
					case 3:
						cout << "3: Středa" << endl;
						program.den = "Středa";
						menu4();
						return program;
					case 4:
						cout << "4: Čtvrtek" << endl;
						program.den = "Čtvrtek";
						menu4();
						return program;
					case 5:
						cout << "5: Pátek" << endl;
						program.den = "Pátek";
						menu4();
						return program;
					case 6:
						cout << "6: Sobota" << endl;
						program.den = "Sobota";
						menu4();
						return program;
					case 7:
						cout << "7: Neděle" << endl;
						program.den = "Sobota";
						menu4();
						return program;
					case 8:
						return program;
					default:
						cout << "Zadej hodnoty mezi 1-7";
						break;
					}
				}
			}

			Program menu4() {
				while (1) {
					cout << "Vyber čas který chceš upravit:" << endl;
					cout << "1: 12:00" << endl;
					cout << "2: 14:00" << endl;
					cout << "3: 16:00" << endl;
					cout << "4: 18:00" << endl;
					cout << "5: 20:00" << endl;
					cout << "6: 22:00" << endl;
					cout << "8: Zpět" << endl;
					string cas;
					int menu4;
					cin >> menu4;
					switch (menu4)
					{
					case 1:
						cout << "1: 12:00" << endl;
						program.cas = "12:00";
						//program.priradFilm(film);
						return program;
					case 2:
						cout << "2: 14:00" << endl;
						program.cas = "14:00";
						//program.priradFilm(film);
						return program;
					case 3:
						cout << "3: 16:00" << endl;
						program.cas = "16:00";
						//program.priradFilm(film);
						return program;
					case 4:
						cout << "4: 18:00" << endl;
						program.cas = "18:00";
						//program.priradFilm(film);
						return program;
					case 5:
						cout << "5: 20:00" << endl;
						program.cas = "20:00";
						//program.priradFilm(film);
						return program;
					case 6:
						cout << "6: 22:00" << endl;
						program.cas = "20:00";
						//program.priradFilm(film);
						return program;
					case 8:
						//cout << "8: Zpět" << endl;
						return program;
					default:
						cout << "Zadej hodnoty mezi 1-6";
						break;
					}
				}
			}
		};


	Menu::Menu()
	{
	}

	Menu::~Menu()
	{
	}

