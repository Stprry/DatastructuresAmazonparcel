#pragma once
#include "RadixSort.h"


class BoxSort
{
public:
	
	vector<string> sortBox()
	{
		AmazonBox AB;
		AB.ParcelCreate();
		//O(lw) where L is input length and W is maximum input width(Max length of all input string)
		vector<size_t> pos = radix_sort<128>(postCode);
		vector<string> tempVec;
		cout << "\n==== Sorted PostCodes ====" << endl;
		for (int i = 0; i < MAXSIZE; i++)
		{
			tempVec.push_back(postCode[pos[i]]); //copy as you go: O(n)
		}
		postCode = tempVec; //overwrite old postCode vec with new sorted one
		return postCode;
	}
};
