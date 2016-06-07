#include "director.h"
#include "actor.h"
#include "film.h"
//#include <iostream>
//#include <stdio.h>
//#include <time.h>
//#include <iterator>
//#include <unistd.h>
//#include <stdlib.h>
//#include <vector>

#define AMOUNT_OF_DIRECTORS 20
#define AMOUNT_OF_ACTORS 120
#define WEEKS 52
#define YEARS 20


	Film filmVector[2*WEEKS];
	Film filmWeeklyWinnerRating[WEEKS];
	Film filmWeeklyWinnerBoxOffice[WEEKS];
/*
void weekFight()
{
	int k = 0;
	int l = 0;
	int m = 0;
	while(k < WEEKS)		
	{
		int i = 0;
		int j = 1;

		//Zaprezentowanie filmów:

		std::cout << "Week #" << k <<": "<< endl;
		std::cout << "'" << filmVector[i].title() << "'" << endl << "(dir. " << filmVector[i]._director.name() << ")" <<endl << "(starring: " << filmVector[i].cast[0].name() << ", " <<filmVector[i].cast[1].name() << ", " <<filmVector[i].cast[2].name() << ", " <<filmVector[i].cast[3].name() << ", " <<filmVector[i].cast[4].name() << ", " <<filmVector[i].cast[5].name() << ")"<<endl;
		std::cout << endl << "vs" << endl;
		std::cout << "'" << filmVector[j].title() << "'" << endl << "(dir. " << filmVector[j].director().name() << ")" <<endl << "(starring: " << filmVector[j].cast[0].name() << ", " <<filmVector[j].cast[1].name() << ", " <<filmVector[j].cast[2].name() << ", " <<filmVector[j].cast[3].name() << ", " <<filmVector[j].cast[4].name() << ", " <<filmVector[j].cast[5].name() << ")"<<endl;


		//Porównanie box office


		if (filmVector[i].box_office() < filmVector[j].box_office()) 
			{ filmWeeklyWinnerBoxOffice[k] = filmVector[i];	}

		else 
			{ filmWeeklyWinnerBoxOffice[k] = filmVector[j]; }


		//Porownanie rating

		if (filmVector[i].rating() < filmVector[j].rating()) 

			{ filmWeeklyWinnerRating[k] = filmVector[i];}

		else 
			{ filmWeeklyWinnerRating[k] = filmVector[j];}

			i+2;
			j+2;
			k++;
		 
	}

}

void boxOfficeResults()
{
	int k = 0;

	std::cout << "Best-selling films in each week: " << endl;
	while (k < WEEKS)
	{
		std::cout << "Week #" << k << ": '" << filmWeeklyWinnerBoxOffice[k].title() << "': $ " << filmWeeklyWinnerBoxOffice[k].box_office() << endl;

	}
}

void ratingResults()
{
	int k = 0;

	std::cout << "Top rated films in each week: " << endl;
	while (k < WEEKS)
	{
		std::cout << "Week #" << k << ": '" << filmWeeklyWinnerRating[k].title() << "': " << filmWeeklyWinnerRating[k].rating() << " / 10" <<endl;

	}
}
*/

int main (int argc, char const *argv[])
{
	Director poolOfDirectors[AMOUNT_OF_DIRECTORS];
	Actor poolOfActors[AMOUNT_OF_ACTORS];


	Film::assignCast( poolOfActors[AMOUNT_OF_ACTORS] );

	//weekFight();
	//boxOfficeResults();
	//ratingResults();

}