#pragma once

#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Actor
{
	static vector <string> firstName;
	static vector <string> lastName;

	static void init();

	string _name, _firstName, _lastName;
	int _age;
	int _amountOfFilms;
	double _actFactor;
	double globalBox_Office, globalRating;

public:
	Actor();

	string name() { return _firstName + " " + _lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double actFactor() { return _actFactor; }
	double box_office() { return globalBox_Office; }
	double rating() { return globalRating; }
};