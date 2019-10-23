//============================================================================
// Name        : tuple_cout.cpp
// Author      : lindorfer
// Version     :
// Copyright   : Your copyright notice
// Description : Print tuples to ofstream
//============================================================================

#include <bits/stdc++.h>
using namespace std;

template<std::size_t I = 0, typename... Tp>
inline typename std::enable_if<I == sizeof...(Tp), string>::type
stringval(const std::tuple<Tp...> & t)
{
  std::stringstream buffer;
  buffer << "}";
  return buffer.str();
}

template<std::size_t I = 0, typename... Tp>
inline typename std::enable_if<I < sizeof...(Tp), string>::type
stringval(const std::tuple<Tp...> & t)
{
  std::stringstream buffer;
  size_t len = sizeof...(Tp);
  if(I==0)
      buffer << "{";
  buffer << std::get<I>(t);
  if(I < len - 1)
    buffer << ", ";
  buffer << stringval<I + 1, Tp...>(t);
  return buffer.str();
}

template<typename... Tp> ostream& operator <<(ostream& out, const std::tuple<Tp...> & t)
{
  out << stringval(t);
  return out;
}

int main() {

	tuple<int, double, string> test = {1, 2.5, "first"};
	cout << test << endl;

	return 0;
}
