#include "director.h"
#include "actor.h"
#include "film.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <vector>

#define AMOUNT_OF_DIRECTORS 20
#define AMOUNF_OF_ACTORS 120
#define WEEKS 52
#define YEARS 20


Film filmVector[2*WEEKS];
Film filmWeeklyWinnerBoxOffice[WEEKS];
Film filmWeeklyWinnerRating[WEEKS];

void weekFight()
{
	for (int k = 0; k < WEEKS; k++)
		cout << "Tydzien #" << k << ": '" << filmVector[k]._title << endl << "(dir. " << filmVector[k]._director.name << ")" << endl << "(starring: " << filmVector[k].cast[0] << ", " << filmVector[k].cast[1] << ", " << filmVector[k].cast[2] << ", " << filmVector[k].cast[3] << ", " << filmVector[k].cast[4] << ", " << filmVector[k].cast[5] << ")"<< endl;
}



void weekBoxOffice()
{
	int k = 0;
	while(k < WEEKS)
		{
			int i = 0;
			int j = 1;
			

		if (filmVector._box_office[i] < filmVector._box_office[j]) 
			filmWeeklyWinnerBoxOffice[k] = filmVector[i]
		else 
			filmWeeklyWinnerBoxOffice[k] = filmVector[j]

			i+2;
			j+2;
			k++;
		 
		}
}

void weekRating()
{
	int k = 0;
	while(k < WEEKS)
		{
			int i = 0;
			int j = 1;
			

		if (filmVector._rating[i] < filmVector._rating[j]) 
			filmWeeklyWinnerBoxOffice[k] = filmVector[i]
		else 
			filmWeeklyWinnerBoxOffice[k] = filmVector[j]

			i+2;
			j+2;
			k++;
		 
		}
}

void showWeeks()
{
	cout << "Najlepiej zarabiajace filmy w kolejnych tygodniach:"<< endl;
	for (int k = 0; k < WEEKS; k++)
	{
		cout << "Tydzien #" << k << ": " << filmWeeklyWinnerBoxOffice[k]._title << " zarobil: $" << filmWeeklyWinnerBoxOffice[k]._box_office << endl; 
	}

	cout << "Najlepiej oceniane filmy w kolejnych tygodniach:"<< endl;
	for (int k = 0; k < WEEKS; k++)
	{
		cout << "Tydzien #" << k << ": " << filmWeeklyWinnerRating[k]._title << " zarobil: $" << filmWeeklyWinnerRating[k]._box_office << endl; 
	}

}

int main (int argc, char constant argv[])
{
	Dir poolOfDirectors[AMOUNT_OF_DIRECTORS];
	Act poolOfActors[AMOUNF_OF_ACTORS];

	Film::assignCast( &poolOfActors )
}