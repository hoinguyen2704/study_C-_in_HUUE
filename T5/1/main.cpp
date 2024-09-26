#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float x, y,z, t, sum, tb;
	cin>>x>>y>>z>>t;
	sum = (x+y+z+t)*1.0;
	tb=(x+y+z+t)/4.0;
	cout<<setprecision(1)<<fixed<<sum<<" "<<tb;
	return 0;
}