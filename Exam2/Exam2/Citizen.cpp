#include "stdafx.h"
#include "Citizen.h"
#include <string>
#include <iostream>

using namespace std;

//Creates a new Citizen object with the passed in
//id, name, and favorite color
//Once a citizen is created, you can't change their id or name
//but you can change their favorite color
Citizen::Citizen(int id, string firstName, string lastName, std::string color){
	theid = id;
	firstname = firstName;
	lastname = lastName;
	setFavoriteColor(color);
}

//Creates a new Citizen object by copying data from the
//passed in citizen
Citizen::Citizen(Citizen* citizen){
	theid = (*citizen).getId();
	firstname = (*citizen).getFirstName();
	lastname = (*citizen).getLastName;
	thecolor = (*citizen).getFavoriteColor;
}

//Returns the first name of this citizen
string Citizen::getFirstName() {
	return firstname;
}

//Returns the last name of this citizen
string Citizen::getLastName() {
	return lastname;
}

//Returns the id for this citizen
int Citizen::getId() {
	return theid;
}

//Returns the favorite color for this citizen
string Citizen::getFavoriteColor() {
	return thecolor;
}

//Sets the favorite color for this citizen
void Citizen::setFavoriteColor(string color) {
	thecolor = color;
}
