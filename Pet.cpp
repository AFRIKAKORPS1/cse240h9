#include "Pet.h"

// Q1 : CLASS METHODS Part 1 : Constructor and Accessor Methods for Pet (5 points)

// Constructor
// Create a constructor for the class Pet which takes 2 string parameters (see helper function for use of constructor).
// Use the 2 string parameters to initialize the 2 private local variables name and breed.
// HINT: Don't forget to initialize your linked list of checkups to NULL.

Pet::Pet(string pet_name, string pet_breed)
{
	Pet::name = pet_name;
	Pet::breed = pet_breed;
	Pet::checkups = NULL;
}

// Accessor Methods
// Create accessor methods for both private local strings name and breed (see print_all function for use of these methods).

string Pet::getBreed()
{
	return breed;
}

string Pet::getName()
{
	return name;
}

// Q2 : CLASS METHODS Part 2 : Class Methods for Pet (10 points)

// Create a method named "addCheckup" which has one string parameter and no return type (see helper function for use).
// This method is used to add a new date to the pet's linked list of checkups. The string parameter is the date of checkup.
// You should add the date to the tail of the linked list "checkups". Checkups will be added in chronological order.

void Pet::addCheckup(string date)
{
	Pet* addCheck;
	
	addCheck->checkups->getDate = date;
	addCheck->checkups->next = NULL;

	if (addCheck->checkups != NULL)
	{
		Checkup* temp;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = addCheck->checkups;
	}
	
}
// Create a method named "lastCheckup" which has no parameters and returns a string (see print_all function for use).
// This method will be used to return a string for the date of the last checkup for this pet.
// If the pet has not yet had a checkups, return an empty string.

string Pet::lastCheckup()
{
	Pet* petCheck;
	if (checkups != NULL)
	{
		return petCheck->checkups->getDate;
	}
	return NULL;
}
