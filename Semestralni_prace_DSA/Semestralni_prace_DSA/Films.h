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

		string nazev;
		string tmp;
		int pozice;
		string updatePrvku;
		string novyNazev;
		string hledanyPrvek;
};

	Films::~Films()
	{
	}
