#pragma once

#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Dir
{
	static vector <string> firstName;
	static vector <string> lastName;
	static void init();

	string firstName, lastName;
	int _age;
	int _amountOfFilms;
	double _dirMultiplier;
	double globalBox_Office, globalRating;

public:
	Dir();

	string name() { return firstName + " " + lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double dirMultiplier() { return _dirMultiplier; }
	double box_office() { return globalBox_Office; }
	double rating() { return globalRating; }
};