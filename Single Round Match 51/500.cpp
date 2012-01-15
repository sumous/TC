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

class MissingParentheses {
public:
	int countCorrections(string);
};

int MissingParentheses::countCorrections(string par) {
	bool flag = false;
	do
	{
		flag = false;
		for(int i = 0;i < par.length()-1;i ++)
		{
			if(par[i] == '(' && par[i+1]== ')')
			{
				par.erase(i,2);
				flag = true;
			}
		}
		if(par.length() == 2) break;
	}while(flag);
	if(par[0] == '(' && par[1] == ')') return 0;
	return par.length();
}


//Powered by [KawigiEdit] 2.0!
