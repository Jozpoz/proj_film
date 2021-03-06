#include "film.h"
#include "actor.h"
#include <stdlib.h>
#include <fstream>
#include <vector>

vector <string> Film::firstPart;
vector <string> Film::middlePart;
vector <string> Film::lastPart;

vector < Actor* > Film::cast;

#pragma mark -
#pragma mark Helpers
#pragma mark -

void Film::init()
{
	ifstream file1("firstNamePart.dat");
	copy(istream_iterator<string>(file1),
		 istream_iterator<string>(),
		 back_inserter(firstPart));
	file1.close();

	ifstream file2("secondNamePart.dat");
	copy(istream_iterator<string>(file2),
		 istream_iterator<string>(),
		 back_inserter(middlePart));
	file2.close();

	ifstream file3("thirdNamePart.dat");
	copy(istream_iterator<string>(file3),
		 istream_iterator<string>(),
		 back_inserter(lastPart));
	file3.close();
}


string Film::name(string first, string middle, string last)
{	
	const int random = (rand() % 100);
	if(random < 25) return first + " " + middle;
	else if(random > 75) return middle + " " + last;
	else if(random == 50) return first + " " + middle + " " + last;
	else return middle;
}


#pragma mark -
#pragma mark Constructors
#pragma mark -

Film::Film()
{
	
	static int amountOfFirstParts = (init(), firstPart.size());
	static int amountOfMiddleParts = (init(), middlePart.size());
	static int amountOfLastParts = (init(), lastPart.size());

	_title = Film::name(firstPart[rand() % amountOfFirstParts],
						middlePart[rand() % amountOfMiddleParts], 
						lastPart[rand() % amountOfLastParts]);
	

	_box_office = Film::box_office();
	_rating = Film::rating();
}

void Film::assignDirector(Director *poolOfDirectors)
{
	Director* _director = &poolOfDirectors[rand() % 20];
}

void Film::assignCast(Actor *poolOfActors)
{
	//Actor * cast[5];
	for (int i = 0; i < 5; i++)
		cast[i] = &poolOfActors[rand() % 120];
}

string Film::actorCast() 
	{
		_allCast = "";
		_allCast = cast[0][1].name() + ", " +
			cast[1][0].name() + (", ") +
			cast[2][0].name() + (", ") +
			cast[3][0].name() + (", ") +
			cast[4][0].name() + (", ") +
			cast[5][0].name() + (", ");

		return _allCast;
	}

double Film::box_office()
{
	return 100000000 * (cast[0][0].actFactor() +
					    cast[1][0].actFactor() +
					    cast[2][0].actFactor() +
					    cast[3][0].actFactor() +
					    cast[4][0].actFactor() +
					    cast[5][0].actFactor() ) * (10 + 0.1*_director.dirMultiplier());
}

double Film::rating()
{
	return 5.0 + (_director.dirMultiplier() * (cast[0][0].actFactor() +
											   cast[1][0].actFactor() +
											   cast[2][0].actFactor() +
											   cast[3][0].actFactor() +
											   cast[4][0].actFactor() +
											   cast[5][0].actFactor() ));
}
