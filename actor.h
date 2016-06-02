#include <string>
#include <vector>

using namespace std;


class Act
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
	Act();

	string name() { return _firstName + " " + _lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double actFactor() { return _actFactor; }
	double box_office() { return globalBox_Office; }
	double rating() { return globalRating; }
};