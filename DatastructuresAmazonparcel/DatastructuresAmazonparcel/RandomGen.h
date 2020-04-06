#pragma once
#include <cstdio>
#include <iostream>
#include <ctime>
#include <string> 
#include <random>
using namespace std;
// assuming postcode is the AANN NAA format for example DN55 1PT
class RandNum
{
public:
	void seed()
	{
		srand(time(NULL));    // initialize the random number generator
	}

	// asssume 9 is the max per number for 5-5 in DN55, we will generate two numbers up to ten per postcode
	string returnRand() // postcode
	{
		int num1 = rand() % 10; // 1-9
		int num2 = rand() % 10; // 1-9
		auto s = std::to_string(num1); // to string
		auto s2 = std::to_string(num2);
		string charReturn = s + s2;
		return charReturn;
	}

	string letterGen() // return  a letter generated from 1-26 (the alphabet)
	{
		char c, b;
		string twoLetters;
		int r;

		for (int i = 0; i < 26; i++)
		{
			r = rand() % 26;   // generate a random number
			c = 'a' + r;  // Convert to a character from a-z
			r = rand() % 26;
			b = 'a' + r;
			twoLetters = std::string(1, c) + b;
		}
		return  twoLetters;
	}
};