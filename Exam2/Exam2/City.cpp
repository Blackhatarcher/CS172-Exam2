#include "stdafx.h"
#include "City.h"
#include "Citizen.h"
#include <string>
#include <iostream>
#include <fstream>

//Creates a new city with the given name
//When the city is created you need to restore
//it's population from a file.
//Hint: You will want to make the file name
//be based on the name of the city.
City::City(string cityName){
	name = cityName;
	ifstream input(getCityName() + ".txt");
	//want to read each line in the file
	//and dump the words into a constructor that builds citizens 
	//who will then be added to the citizens vector

}

//This is the destructor for the city.  When
//this city is destroyed, save the population of
//the city to a file so that you can restore
//it in the constructor the next time that
//a city with this name is created.

//don't think I need to delete anything because it will get deleted on its own 
//no "new"s 
City::~City(){
	ofstream output;
	//don't care if the txt already exists 
	output.open(getCityName() + ".txt");
	//each line will hold a citizen
	// id firstname lastname color
	for (int i = 0; i < citizens.size(); i++) {
		output << (*citizens[i]).getId() << " " << (*citizens[i]).getFirstName() << " " << (*citizens[i]).getLastName() << " " << (*citizens[i]).getFavoriteColor() << endl;
	}
	output.close();
	//and I need to... delete the pointer to the citizens array?
}

//Returns the city name
string City::getCityName() {
	return name;
}

//Returns the number of citizens in this city
int City::populationSize() {
	return population;
}

//Returns the citizen at the given index.
Citizen* City::getCitizenAtIndex(int index) {
	return citizens[index];
}

//Adds a citizen to this city. You will need to
//make a copy of this citizen so that you make
//sure to keep it around for the life of the city.
void City::addCitizen(Citizen* citizen) {
	citizens.push_back(citizen);
}

//Returns the citizen with the given id.
Citizen* City::getCitizenWithId(int id) {
	return citizens[id];
}

//Returns a vector of citizens that all have
//the given color as their favorite color.
//For example, if color is “Blue” this will return all citizens
//for this city who’s favorite color is Blue.
vector<Citizen*> City::getCitizensForFavoriteColor(string color) {
	//create the vector that will be returned
	vector<Citizen*> newVector;
	//interate through citizens
	for (int i = 0; i < citizens.size(); i++) {
		//add that citizen if his color matches color
		if ((*citizens[i]).getFavoriteColor() == color) {
			newVector.push_back(citizens[i]);
		}
	}
	return newVector;
}
