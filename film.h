#pragma once

#include "actor.h"
#include "director.h"
#include <string>
#include <vector>

using namespace std;

/* 
struct ratio
{
	double box_office, rating;
}; 
*/

class Film
{
	static vector <string> names;
	string _title;
	string _genre;
	Dir _director;
	vector <Act> cast;
	int _budget;
	ratio _box_office, _rating;

public:
	Film();

	string title() { return _title; }
	/* virtual ? */ Dir director() { return _director; }
	/* virtual ? */ Act cast() { return cast[0] + ", " + 
				 		cast[1] + ", " + 
				 		cast[2] + ", " + 
				 		cast[3] + ", " + 
				 		cast[4] + ", " + 
				 		cast[5] + ", "; }
	// string genre() { return _genre; }
	int budget() {return _budget; }
	double box_office() { return _box_office; }
	double rating() { return _rating; }
};
