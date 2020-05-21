#pragma once
#include "RandomGen.h"
#include <iostream>
#include <string> 

const int MAXSIZE = 10; //! Max size for Vector 

vector<string> postCode; // vector dynamicly allocates array size
class AmazonBox
{
public:
	void ParcelCreate()
	{
		RandNum R;
		R.seed();//! seed ONCE otherwise no random numbers 
		
		for (int i = 0; i < MAXSIZE; i++)
		{
			string postChar = { R.letterGen() };
			string postLetter = { R.returnRand() };
			for (auto & c : postChar) c = toupper(c);// turn postChar to upper loop trough post char and post it to upper return to postChar
			postCode.push_back(postChar + postLetter);
		}
	}
};
