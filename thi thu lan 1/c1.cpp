#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double Pi, P;
	cin>>n;
	for ( int i =0; i<= n; i++)
	{
		P +=  pow (-1.0, i)/ (2.0*i+1);
	}
	Pi = P * 4.0;
	cout<<setprecision(5)<<fixed<<Pi;
	return 0;
}