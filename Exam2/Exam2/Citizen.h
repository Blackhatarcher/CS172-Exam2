#pragma once
#include <string>
#include <iostream>

using namespace std;
//for some reason the using namespace std doesn't seem to be working so I have to type std::string
class Citizen
{
private:
	std::string thecolor;
	int theid;
	std::string firstname;
	std::string lastname;

public:

	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color
	Citizen(int id, std::string firstName, std::string lastName, std::string color);

	//Creates a new Citizen object by copying data from the
	//passed in citizen
	Citizen(Citizen* citizen);

	//Returns the first name of this citizen
	std::string getFirstName();

	//Returns the last name of this citizen
	string getLastName();

	//Returns the id for this citizen
	int getId();

	//Returns the favorite color for this citizen
	string getFavoriteColor();

	//Sets the favorite color for this citizen
	void setFavoriteColor(string color);

};

