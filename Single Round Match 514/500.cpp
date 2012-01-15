#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class MagicalGirlLevelTwoDivTwo {
public:
	string isReachable(vector <int>, int, int);
};

string MagicalGirlLevelTwoDivTwo::isReachable(vector <int> jt, int x, int y) {
	x = abs(x);y = abs(y);
	for(int i=0;i<jt.size();i++)
		if(jt[i]%2 == 0) return "YES";
	if((x+y)%2 == 0) return "YES";
	return "NO";
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!