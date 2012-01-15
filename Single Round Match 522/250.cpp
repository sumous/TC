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

class PointErasingTwo {
public:
	int getMaximum(vector <int>);
};

int PointErasingTwo::getMaximum(vector <int> y) {
	int max = 0;
	for(int i = 0;i < y.size();i ++)
	{
		for(int j = i+2;j < y.size();j ++)
		{
			int tmp = 0;
			int y1 = y[i],y2 = y[j];
			if(y1>y2){int temp = y1;y1 = y2;y2 = temp;}
			for(int k = i+1;k < j;k ++)
			{
			    cout<<y1<<" "<<y[k]<<" "<<y2<<endl;
				if(y[k]>y1 && y[k]<y2) tmp ++;
			}
			if(tmp>max) max = tmp;cout<<endl;
			//cout<<y1<<y2<<tmp<<endl;
		}
	}
	return max;
}
int main()
{
    PointErasingTwo a;
    int myints[] = { 1, 2, 1, 1, 0, 4, 3 };
    vector<int> y (myints, myints + sizeof(myints) / sizeof(int) );
    cout<<a.getMaximum(y);
    return 0;
}

//Powered by [KawigiEdit] 2.0!
