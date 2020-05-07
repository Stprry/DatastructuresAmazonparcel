#pragma once
#include "RandomGen.h"
#include <iostream>
#include <string> 

const int MAXSIZE = 15; //! Max size for Vector 

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
		
		for (int i = 0; i<MAXSIZE;i++)
		{
			/*cout << "before sorting" << endl;
			cout << postCode[i] << endl;*/
		}
	}
};




//const int MAX_CHAR = 26;
//// hash vector to keep count of characters
//int charCounter[MAX_CHAR] = { 0 }; // init char counter to 0
//for (int i = 0; i < str.length(); i++)
//	charCounter[str[i] - 'a']++; //a-'a' will be 0, b-a will be 1 ect

//for (int i = 0; i < MAX_CHAR; i++) // loop trough hash array
//	for (int j = 0; j < charCounter[i]; j++) // print hash array
//		cout << (char)('a' + i);