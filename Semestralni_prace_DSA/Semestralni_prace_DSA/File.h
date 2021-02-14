#pragma once
#include <iostream>
#include <fstream>
#include "Films.h"
#include "Menu.h"

using namespace std;

class File
{
	public:
		File();
		~File();

	Films importDat()
	{
		Films film;
		string tmp;
		ifstream File("filmy.txt");
		int i = 0;
		while (getline(File, tmp)) {
			film.films = tmp;
			i = i + 1;
		}
		File.close();
		return film;
	}

	void exportDat(Films film)
	{
		//Films film;
		ofstream File("filmy.txt");
		for (int i = 0; i < film.velikostPole; i++)
		{
			//if (film.films[i] != "")
			//{
				File << film.films[i]<< endl;
			//}
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