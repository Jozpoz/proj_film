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
	static vector <Actor*> cast;

	//static Actor* cast;

	static void init();
	static string name(string first, string middle, string last);


	string _title;
	Director _director;
	double _box_office, _rating;

	
	double box_office();
	double rating();
/*
	string name();
	string _genre;
	// vector <Actor> cast;
	int _budget;

*/
public:
	Actor& operator[](int);
	void assignCast(Actor &poolOfActors);

	Film();

	string title() { return _title; }

	//virtual Director director() { return _director; }
	//virtual Actor cast() { return cast[0] + ", " + 
	//			 		cast[1] + ", " + 
	//			 		cast[2] + ", " + 
	//			 		cast[3] + ", " + 
	//			 		cast[4] + ", " + 
	//			 		cast[5] + ", "; }
	// string genre() { return _genre; }
	// int budget() { return _budget; }
	//double box_office() { return _box_office; }
	//double rating() { return _rating; }
	
};
