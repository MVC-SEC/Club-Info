// PC_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name,
		age,
		cityName,
		collegeName,
		profession,
		animal,
		petName;

	cout << "What is your name? ";
	getline(cin, name);

	cout << "\nWhat is your age? ";
	getline(cin, age);

	cout << "\nWhere do you live? ";
	getline(cin, cityName);

	cout << "\nWhat is the name of the college that you go to? ";
	getline(cin, collegeName);

	cout << "\nWhat is your profession? ";
	getline(cin, profession);

	cout << "\nWhat animal do you own? "; // get multiple values into an array.
	getline(cin, animal);

	cout << "\nWhat is it's name? ";
	getline(cin, petName);

	cout << "\nThere once was a person named " << name << " who lived in " << cityName << ".\nAt the age of "
		<< age << ", " << name << " went to " << collegeName << ".\n" << name << " graduated and went to work as a "
		<< profession << ".\nThen, " << name << " adopted a(n) " << animal << " named " << petName << ".\nThey both lived happily ever after!\n\n";

    return 0;
}