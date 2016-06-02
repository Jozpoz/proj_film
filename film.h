#pragma once

#include "actor.h"
#include "director.h"
#include <iterator>
#include <string>
#include <vector>

using namespace std;

class Film
{
	static vector <string> firstPart;
	static vector <string> middlePart;
	static vector <string> lastPart;
	//static vector <Act> cast;

	static Act* cast;

	static void init();


	string _title;
	Director _director;
	double _box_office, _rating;

	/*
	void cast();
	double box_office();
	double rating();

	string name();
	string _genre;
	// vector <Act> cast;
	int _budget;

*/
public:
	static void assignCast(/*Act *pool*/) { /* poolOfActors = pool; */ }
	Film();
/*
	string title() { return _title; }
	virtual Dir director() { return _director; }
	virtual Act cast() { return cast[0] + ", " + 
				 		cast[1] + ", " + 
				 		cast[2] + ", " + 
				 		cast[3] + ", " + 
				 		cast[4] + ", " + 
				 		cast[5] + ", "; }
	// string genre() { return _genre; }
	int budget() { return _budget; }
	//double box_office() { return _box_office; }
	//double rating() { return _rating; }
	*/
};
