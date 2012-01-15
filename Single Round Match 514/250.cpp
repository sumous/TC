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

class MagicalGirlLevelOneDivTwo {
public:
	double theMinDistance(int, int, int);
};

double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y) {
	x=abs(x);y=abs(y);
	if(x<=d && y<=d) return 0.0;
	else if(x>d && y<d) return double(x-d);
	else if(y>d && x<d) return double(y-d);
	else return sqrt((x-d)*(x-d)+(y-d)*(y-d));
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!