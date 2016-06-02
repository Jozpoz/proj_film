#include "director.h"
#include <stdlib.h>
#include <fstream>

vector <string> Director::firstNames;
vector <string> Director::lastNames;


void Director::init()
{
	ifstream file1("firstDirectorName.dat");
	copy(istream_iterator<string>(file1),
		 istream_iterator<string>(),
		 back_inserter(firstNames));
	file1.close();

	ifstream file2("lastDirectorName.dat");
	copy(istream_iterator<string>(file2),
		 istream_iterator<string>(),
		 back_inserter(lastNames));
	file2.close();
}

Director::Director()
{
	static int amountOfFirstNames = (init(), firstNames.size());
	static int amountOfLastNames = (init(), lastNames.size());

	firstName = firstName[rand() % amountOfFirstNames];
	lastName = lastName[rand() % amountOfLastNames];
	_age = 21 + rand() % 49;										//wiek reżysera z zakresu 21-49 na początku symulacji
	_amountOfFilms = 0; 
	_dirMultiplier = 1; 											//każdy reżyser zaczyna z zerowym dorobkiem i jednostkowym współczynnikiem
	globalBox_Office = 0;
	globalRating = 0;
}
