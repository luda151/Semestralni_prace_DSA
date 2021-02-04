#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include "Films.h"
using namespace std;

class Program
{
	public:
		~Program();
		string den;
		string cas;
		string filmik;
		int suma = 0;
		int kapacita = 80;
		int obsazenost = 0;
		void zobrazProgram(Program program)
		{
			while (1) {
				cout << "Vyber den který chceš zobrazit:" << endl;
				cout << "1: Pondělí" << endl;
				cout << "2: Úterý" << endl;
				cout << "3: Středa" << endl;
				cout << "4: Čtvrtek" << endl;
				cout << "5: Pátek" << endl;
				cout << "6: Sobota" << endl;
				cout << "7: Neděle" << endl;
				cout << "8: Zpět" << endl;
				int menu5;
				cin >> menu5;
				switch (menu5)
				{
				case 1:
					cout << "1: Pondělí" << endl;
					if(program.den == "Pondělí"){
						cout << program.cas + " - " + program.filmik + "\n"<< endl;
					}
					break;

				case 2:
					cout << "2: Úterý" << endl;
					if (program.den == "Úterý") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 3:
					cout << "3: Středa" << endl;
					if (program.den == "Středa") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 4:
					cout << "4: Čtvrtek" << endl;
					if (program.den == "Čtvrtek") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 5:
					cout << "5: Pátek" << endl;
					if (program.den == "Pátek") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 6:
					cout << "6: Sobota" << endl;
					if (program.den == "Sobota") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 7:
					cout << "7: Neděle" << endl;
					if (program.den == "Neděle") {
						cout << program.cas + " - " + program.filmik << endl;
					}
					break;
				case 8:
					return;
				default:
					cout << "Zadej hodnoty mezi 1-7";
					break;
				}
			}
		}


		void priradFilm(Films film)
		{
			bool exist = 0;
			while (exist==0) {
				cout << "Vybral si:" + den + " " + cas << endl;
				cout << "Vyber film který chceš přiřadit:" << endl;
				cout << "Aktuálně přidané filmy:" << endl;
				film.zobrazFilmy();
				cout << "Zadej název filmu" << endl;
				cout << "8: Zpět" << endl;
				cin >> filmik;
				exist = film.existujeFilm(filmik);
					if (filmik == "8") {
						exist = true;
					}
			}
			cout << "Přiřadil si:" + den + " " + cas + " " + filmik << endl;
		}

		void odeberPrizazenyFilm()
		{
			den = "";
			cas = "";
			filmik = "";
		}

		void zobrazKapacituFilmu()
		{
			cout << "Obsazenost/kapacita: \n" << obsazenost << "/" << kapacita << endl;
		}
		void pridejLidiNaFilm(int suma)
		{
			if (obsazenost + suma > kapacita) {
				cout << "přesahuje kapacitu" << endl;
				zobrazKapacituFilmu();
			}
			else
			{
				obsazenost = obsazenost + suma;
				cout << "uspesne si prodal listky" << endl;
				zobrazKapacituFilmu();
			}
		}
		void odeberLidiZFilmu(int suma)
		{
			if (obsazenost - suma < 0) {
				cout << "tolik lidi tam neni" << endl;
				zobrazKapacituFilmu();
			}
			else
			{
				obsazenost = obsazenost - suma;
				cout << "uspesne si vratil zpet penize" << endl;
				zobrazKapacituFilmu();
			}
		}
};

Program::~Program()
{
}