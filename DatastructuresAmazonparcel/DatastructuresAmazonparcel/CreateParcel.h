#pragma once
#include "RandomGen.h"
#include <iostream>
#include <string> 
class AmazonBox
{
public:
	void ParcelCreate()
	{
		RandNum R;
		R.seed();//! seed ONCE otherwise no random numbers 
		for (int i = 0; i < 10; i++)
		{
			string postChar = { R.letterGen() };
			for (auto & c : postChar) c = toupper(c);// turn postChar to upper loop trough post char and post it to upper return to postChar
			string postLetter = { R.returnRand() };
			cout << postChar << postLetter << endl;
		}


	}
};
