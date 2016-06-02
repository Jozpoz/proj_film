#include "actor.h"
#include <stdlib.h>
#include <fstream>

vector <string> Act::firstName;
vector <string> Act::lastName;

void Act::init()
{
	ifstream file("firstActorName.dat");
	copy(istream_iterator<string>(file),
		 istream_iterator<string>(),
		 back_inserter(firstName));
	file.close();

	ifstream file("lastActorName.dat");
	copy(istream_iterator<string>(file),
		 istream_iterator<string>(),
		 back_inserter(lastName));
	file.close();
}

Act::Act()
{
	/*static */ int amountOfFirstNames = (init(), firstName.size());
	int amountOfLastNames = (init(), lastName.size());

	_firstName = firstName[rand() % amountOfFirstNames];
	_lastName = lastName[rand() % amountOfLastNames];
	_age = 6 + rand() % 85;										//wiek aktora z zakresu 21-49 na początku symulacji
	_amountOfFilms = 0; 
	_actFactor = 1; 											//każdy aktor zaczyna z zerowym dorobkiem i jednostkowym współczynnikiem
	globalBox_Office = 0;
	globalRating = 0;
}