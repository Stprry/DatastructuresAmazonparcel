#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "SortParcel.h"
using namespace std;

class TreeSort
{
public:
	BoxSort bs;
	vector<string> x = bs.sortBox();
	//vector<string,vector<string> > fakeTreeSort;//TODO Is this the issue?
	vector<vector<string> > fakeTreeSort;
		
	vector<int>::iterator it;

	void test()
	{
		for (auto i = x.begin(); i != x.end(); i++)
		{
			//std::cout << *i << endl;

			string firstChar = i->substr(0, 1);
			std::cout << "Identified First Char" << firstChar << endl;

			//! OLD WAY OF DOING IT
			//vector<string>::iterator it;
			//it = find(fakeTreeSort.begin(), fakeTreeSort.end(), firstChar);
			//if (it != fakeTreeSort.end())
			//{
			//	// element found so add to faketreesort
			//	it = fakeTreeSort.insert(it, firstChar);
			//}
			//else
			//{
			//	//element not found so new element and reached end of vector
			//	std::cout << "End of vector";
			//}
			//
			//! NEW Way Of Doing IT
			bool isPresent = (find(cbegin(fakeTreeSort), cend(fakeTreeSort), firstChar) != cend(fakeTreeSort));
			if (isPresent == true)
			{
				//isPresent = fakeTreeSort.insert(isPresent, firstChar);
				fakeTreeSort.insert(fakeTreeSort.begin() + isPresent , firstChar);
			}else
			{
				// no element found and reached end of vector
				std::cout << "End Of Vector Reached";
			}
		}

		// print out
		std::cout << "-------------------------------------------";
		/*for (string firstChar : fakeTreeSort)
		{
			vector<string> enteries = fakeTreeSort[firstChar];
			std::cout << "Character Key: " << firstChar;
			for (auto first_char : enteries)(std::cout << "--------->" << first_char << endl);
		}*/
		
		for (auto i = x.begin(); i != x.end();i++)
		{
			fakeTreeSort.pop_back();
		}

	}
};
