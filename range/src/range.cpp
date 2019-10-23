//============================================================================
// Name        : range.cpp
// Author      : lindorfer
// Version     :
// Copyright   : Your copyright notice
// Description : Simplistic Python-Like Ranges
//============================================================================

#include <bits/stdc++.h>
using namespace std;

template <typename start_type, typename stop_type, typename step_type>
vector<step_type> range(start_type start, stop_type stop, step_type step){
  if (step == step_type(0)){
    throw std::invalid_argument("step for range must be non-zero");
  }

  if(typeid(step) != typeid(start)){

  }

  vector<step_type> result;
  step_type i = start;

  while ((step > 0) ? (i < stop) : (i > stop)){
    result.push_back(i);
    i += step;
  }

  return result;
}

template <typename T>
vector<T> range(T start, T stop){
  return range(start, stop, T(1));
}

template <typename T>
vector<T> range(T stop){
  return range(T(0), stop, T(1));
}

int main() {

	auto x = range(10); // [0, ..., 9]
	auto y = range(2, 20); // [2, ..., 19]
	auto z = range(10, 2, -2); // [10, 8, 6, 4]

	auto d = range(1, 20, 5.0); //[1.0, 6.0, 11.0, 16.0]

	for(auto i : d){
		cout << i << " ";
	}
	cout << endl;
	for(auto i : z){
		cout << i << " ";
	}

	return 0;
}
