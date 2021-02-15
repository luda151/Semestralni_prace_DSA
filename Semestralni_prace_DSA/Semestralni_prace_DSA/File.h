#pragma once
#include <iostream>
#include <fstream>
#include "Films.h"
#include "Menu.h"
#include "Knihovna.h"
#include "File.h"

using namespace std;

class File
{
	public:
		File();
		~File();

	Films importDat(Films* film)
	{
		string tmp;
		ifstream File("filmy.txt");
		while (getline(File, tmp)) {
			addFilm(film, tmp);
			}
		File.close();
		return *film;
	}

	void exportDat(Films film[])
	{
		ofstream File("filmy.txt");
		for (int i = 0; i < velikost; i++)
		{
		if (film[i].nazev != "")
			{
			File << film[i].nazev << endl;
			}
		}
		File.close();
	}

};

File::File()
{

}

File::~File()
{
}