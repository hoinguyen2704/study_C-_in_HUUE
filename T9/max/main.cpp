#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n, max =0, va, min, vi;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (int i=0; i<n; i++)
	{
		if (max < a[i] )
		{
			max = a[i];
		}
	}
	for (int i=0; i<n; i++)
	{
		if (a[i] == max)
		{
			va = i;
			break;
		}
	}
	min= a[0];
	for (int i=1; i<n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	for (int i=0; i<n; i++)
	{
		if (a[i]==min)
		{
			vi= i;
			break;
		}
	}
	cout<<vi<<" "<<va;
	return 0;
}
