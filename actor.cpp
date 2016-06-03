#include "actor.h"
#include <stdlib.h>
#include <fstream>

vector <string> Actor::firstName;
vector <string> Actor::lastName;

void Actor::init()
{
	ifstream file1("firstActorName.dat");
	copy(istream_iterator<string>(file1),
		 istream_iterator<string>(),
		 back_inserter(firstName));
	file1.close();

	ifstream file2("lastActorName.dat");
	copy(istream_iterator<string>(file2),
		 istream_iterator<string>(),
		 back_inserter(lastName));
	file2.close();
}

Actor::Actor()
{
	int amountOfFirstNames = (init(), firstName.size());
	int amountOfLastNames = (init(), lastName.size());

	_firstName = firstName[rand() % amountOfFirstNames];
	_lastName = lastName[rand() % amountOfLastNames];
	_age = 6 + rand() % 85;										//wiek aktora z zakresu 21-49 na początku symulacji
	_amountOfFilms = 0; 
	_actFactor = 1; 											//każdy aktor zaczyna z zerowym dorobkiem i jednostkowym współczynnikiem
	globalBox_Office = 0;
	globalRating = 0;
}