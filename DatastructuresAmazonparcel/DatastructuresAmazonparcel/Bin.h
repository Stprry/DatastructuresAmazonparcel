#pragma once
#include <iostream>
//#include <string>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <unordered_map>
//#include "SortParcel.h"
//#include "stringhelper.h"
//using namespace std;
//
//class TreeSort
//{
//public:
//	BoxSort bs;
//	vector<string> x = bs.sortBox();
//	//vector<string,vector<string> > fakeTreeSort;//TODO Is this the issue?
//	//vector<vector<string> > fakeTreeSort;
//	
//
//	void test()
//	{
//		auto fakeTreeSort = std::unordered_map<string,vector<string>>();
//		vector<string>::iterator it;
//		for (auto i = x.begin(); i != x.end(); i++)
//		{
//			//std::cout << *i << endl;
//
//			string firstChar = i->substr(0, 1);
//			std::cout << "Identified First Char" << firstChar << endl;
//
//			for (auto entry : x)
//			{
//				cout << "Entry : ";
//				auto firstChar = entry.substr(0, 1); // find first char of each entry
//				cout << firstChar << endl;
//
//				if (fakeTreeSort.find(firstChar) == fakeTreeSort.end())
//				{
//					// new so create entry
//					fakeTreeSort.emplace(firstChar, vector<string> {entry});
//
//					cout << "New Character Found " << firstChar<< ". Inserting into fakeTreeSort" << std::endl;
//
//				}
//				else
//				{
//					// add to existing
//					fakeTreeSort[firstChar].push_back(entry);
//
//					cout << "Character Found. Adding to List" << std::endl;
//				}
//			}
//		}
//		// print out
//		std::cout << "-------------------------------------------"<< endl;
//
//		for (auto key : fakeTreeSort)
//		{
//			auto entries = fakeTreeSort[key.first];
//
//			std::cout << key.first << std::endl;
//
//			std::for_each(entries.begin(), entries.end(), [&](std::any x)
//			{
//				std::cout << StringHelper::formatSimple(L"----->", x) << std::endl;
//			});
//		}
//	}
//};