#include <string>
#include <vector>

using namespace std;

struct ratio
{
	double box_office, rating;
};

class Act
{
	static vector <string> names;

	string _name;
	int age;
	int amountOfFilms;
	ratio globalBox_Office, globalRating;

public:
	Act();

	string name() { return _firstName + " " + _lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double actFactor() { return _actFactor; }
	ratio box_office() { return globalBox_Office; }
	ratio rating() { return globalRating; }
};