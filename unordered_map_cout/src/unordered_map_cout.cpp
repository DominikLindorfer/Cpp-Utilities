//============================================================================
// Name        : unordered_map_cout.cpp
// Author      : lindorfer
// Version     :
// Copyright   : Your copyright notice
// Description : Print std::unordered_map by overloading ostream << operator
//============================================================================

#include <bits/stdc++.h>
#include "../Utilities.hpp"
using namespace std;

//-----Unordered_Map-----
//-----Output unordered_map to ofstream-----
template<typename K, typename T>
ostream& operator<< (ostream& out, unordered_map<K, T>& umap) {
	out << "{";

	for(auto it = umap.begin(); it != umap.end(); it++){

		if(next(it) == umap.end()){
			out << "{" << it -> first << ", " << it -> second << "}";
		}
		else{
			out << "{" << it -> first << ", " << it -> second << "}, ";
		}
	}

    out << "}";
    return out;
}

int main() {

	unordered_map<string, double> test;

	test["one"] = 1.0;
	test["two"] = 2.0;

	cout << test << endl;
	return 0;
}
