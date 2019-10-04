#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <functional>
#include <fstream>
#include <stack>
#include <map>
#include <unordered_map>
#include <numeric>

using namespace std;

void permuteInts(vector<int> integers, int loc, int length) {
	
	if (loc == length-1)
	{
		for (int i = 0; i < integers.size(); ++i) { cout << integers[i] << " "; }
		cout << endl;
		return;		// base
	}

	for (int x = loc; x < length; ++x) {
		swap(integers[x], integers[loc]);
		permuteInts(integers, loc+1, length);
		swap(integers[loc], integers[x]);
	}
}

int main()
{
  	// initialize a vector with some ints
	vector<int> test;
	test.resize(5);
	iota(test.begin(), test.end(), 0);
	
	// print out the initial vector
	for (int i = 0; i < test.size(); ++i) { cout << test[i] << " "; }
	cout << endl;
	
	// print all permutations
	permuteInts(test, 0, test.size());

	return 0;
}
