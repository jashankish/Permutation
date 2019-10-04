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

int main()
{
  // initialize a vector with some ints
	vector<int> test;
	test.resize(5);
	iota(test.begin(), test.end(), 0);
	for (int i = 0; i < test.size(); ++i) { cout << test[i] << " "; }
  
  return 0; 
}
