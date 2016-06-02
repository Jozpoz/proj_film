#include "director.h"
#include <stdlib.h>
#include <fstream>

vector <string> Dir::firstName;
vector <string> Dir::lastName;

void Dir::init()
{
	ifstream file1("firstDirectorName.dat");
	copy(istream_iterator<string>(file1),
		 istream_iterator<string>(),
		 back_inserter(firstName));
	file1.close();

	ifstream file2("lastDirectorName.dat");
	copy(istream_iterator<string>(file2),
		 istream_iterator<string>(),
		 back_inserter(lastName));
	file2.close();
}

Dir::Dir()
{
	 int amountOfFirstNames = (init(), firstName.size());
	 int amountOfLastNames = (init(), lastName.size());

	firstName = firstName[rand() % amountOfFirstNames];
	lastName = lastName[rand() % amountOfLastNames];
	_age = 21 + rand() % 49;										//wiek reżysera z zakresu 21-49 na początku symulacji
	_amountOfFilms = 0; 
	_dirMultiplier = 1; 											//każdy reżyser zaczyna z zerowym dorobkiem i jednostkowym współczynnikiem
	globalBox_Office = 0;
	globalRating = 0;
}