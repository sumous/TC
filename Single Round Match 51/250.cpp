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

class RedAndGreen {
public:
	int minPaints(string);
};

int is_red(char ch)
{
	if (ch == 'R') return 0;
	else return 1;
}

int is_green(char ch)
{
	if (ch == 'G') return 0;
	else return 1;
}


int RedAndGreen::minPaints(string row) {
	int min = 51;
	for(int i = 0;i <= row.length();i ++)
	{
			int tmp = 0;
			for(int r = 0;r < i;r ++)
			{
				tmp += is_red(row.at(r));
			}
			for(int g = i;g < row.length();g++)
			{
				tmp += is_green(row.at(g));
			}
			if(tmp < min) min = tmp;
	}
	return min;
}


//Powered by [KawigiEdit] 2.0!
