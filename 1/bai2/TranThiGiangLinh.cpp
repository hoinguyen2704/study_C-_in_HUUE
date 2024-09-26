#include <iostream>
using namespace std;
int main (){
	double a,b,c,d,e,min,min_2;
	cin >> a >> b >> c >> d >> e;
	min = a;
	if ( min >= b) 
		min = b;
	if ( min >= c)
		min = c;
	if ( min >= d)
		min = d;
	if ( min >= e)
		min = e;
	int max = a;
	if (max < b)
	{
		max =b;
	}
	if (max <c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}
	min_2 = max;
	if ( min_2 > b && b != min)
		min_2 = b;
	if ( min_2 > c && c != min)
		min_2 = c;
	if ( min_2 > d && d != min)
		min_2 = d;
	if ( min_2 > e && e != min)
		min_2 = e;
	cout << min_2;
	return 0;
	}