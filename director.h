#include <string>
#include <vector>

using namespace std;

struct ratio
{
	double box_office, rating;
};

class Dir
{
	static vector <string> names;

	string name;
	int _age;
	int _amountOfFilms;
	double _dirMultiplier
	ratio globalBox_Office, globalRating;

public:
	Dir();

	string name() { return _firstName + " " + _lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double dirMultiplier() { return _dirMultiplier; }
	ratio box_office() { return globalBox_Office; }
	ratio rating() { return globalRating; }
};