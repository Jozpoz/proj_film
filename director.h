#pragma once

#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Director
{
	static vector <string> firstNames;
	static vector <string> lastNames;
	static void init();

	string firstName, lastName;
	int _age;
	int _amountOfFilms;
	double _dirMultiplier;
	double globalBox_Office, globalRating;

public:
	Director();

	string name() { return firstName + " " + lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double dirMultiplier() { return _dirMultiplier; }
	double box_office() { return globalBox_Office; }
	double rating() { return globalRating; }
};
