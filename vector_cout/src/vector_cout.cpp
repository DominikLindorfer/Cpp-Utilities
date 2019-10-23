//============================================================================
// Name        : vector_cout.cpp
// Author      : lindorfer
// Version     :
// Copyright   : Your copyright notice
// Description : Print std::vector by overloading ostream << operator
//============================================================================

#include <bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<< (ostream& out, const vector<T>& v) {
    out << "{";
    size_t last = v.size() - 1;
    for(size_t i = 0; i < v.size(); ++i) {
        out << v[i];
        if (i != last)
            out << ", ";
    }
    out << "}";
    return out;
}

int main() {
	vector<double> test = {1,2,5.0,10.5};
	vector< vector < double > > d_vec = {test, test};

	cout << test << endl;
	cout << d_vec << endl;

	return 0;
}
