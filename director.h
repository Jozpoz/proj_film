#include <string>
#include <vector>

using namespace std;

class Dir
{
	static vector <string> name;
	static void init();

	string _firstName, _lastName;
	int _age;
	int _amountOfFilms;
	double _dirMultiplier;
	double globalBox_Office, globalRating;

public:
	Dir();

	string name() { return _firstName + " " + _lastName; }
	int age() { return _age; }
	int amountOfFilms() { return _amountOfFilms; }
	double dirMultiplier() { return _dirMultiplier; }
	double box_office() { return globalBox_Office; }
	double rating() { return globalRating; }
};