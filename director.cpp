#include "director.h"
#include <stdlib.h>
#include <fstream>

static vector <string> Dir::firstName;
static vector <string> Dir::lastName;

void Dir::init()
{
	ifstream file("firstDirectorName.dat");
	copy(istream_iterator<string>(file),
		 istream_iterator<string>(),
		 back_inserter(firstName));
	file.close();

	ifstream file("lastDirectorName.dat");
	copy(istream_iterator<string>(file),
		 istream_iterator<string>(),
		 back_inserter(lastName));
	file.close();
}

Dir::Dir()
{
	static int amountOfFirstNames = (init(), firstName.size());
	static int amountOfLastNames = (init(), lastName.size());

	_firstName = firstName[rand() % amountOfFirstNames];
	_lastName = lastName[rand() % amountOfLastNames];
	_age = 21 + rand() % 49;										//wiek reżysera z zakresu 21-49 na początku symulacji
	_amountOfFilms = 0; 
	_dirMultiplier = 1; 											//każdy reżyser zaczyna z zerowym dorobkiem i jednostkowym współczynnikiem
	globalBox_Office = 0;
	globalRating = 0;
}