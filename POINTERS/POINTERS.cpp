// POINTERS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h" // precompiled header
#include <iostream> // allows me to use cin and cout
#include <string> // allows me to use strings
#include <algorithm> // allows me to do fancy string magic like shuffling the characters in a string 
using namespace std; // makes it so I dont have to type std a million times 



void SquareNum(int *num)
{
	cout << "The number you entered was: " << *num << endl; // displays number user entered
	cout << "The number squared is: " << (*num *= *num) << endl; // displays squared number the user entered
	system("pause"); // waits for user keypress
}

string WordScramble(string *word)
{
	string wordToScramble = *word; // grabs the string the user entered

	random_shuffle(wordToScramble.begin(), wordToScramble.end()); // shuffles the string the user entered
	
	return wordToScramble; // returns the scrambled word
}

int main()
{
	int num; // holds the number entered
	int *numPtr = &num; // declaring and initializing the pointer to the number the user entered
	string word;// holds the user input string
	string *wordPtr = &word; // declaring and initializing the pointer to the number the user entered

	cout << "Please Enter a number to square." << endl; // outputs text
	cin >> num; // takes user input and stores in num
	while (cin.fail()) // repeats till an integer is given for num
	{
		cin.clear(); 
		cin.ignore();
		cout << "Please Enter a Whole Number" << endl;
		cin >> num;
	}
	SquareNum(&num);// calls function and passes pointer

	cout << "Enter a string of characters to scramble: " << endl; // outputs text
	
	cin >> word; // gets user input

	cout << "The string of characters you entered is: " << word << endl; // outputs user input
	string scrambledWord = WordScramble(&word); // calls function and passes the pointer

	cout << "The string of characters you entered was scrambled into: " << scrambledWord << endl; // outputs scrambled word

	system("pause"); // waits for user input
}
