#include <iostream>
using namespace std;
int main()
{
	int n, min, max=0, l, b, i;
	cin>>n;
	int a[n];
	for (i=0; i<n ; i++)
	{
		cin>>a[i];
	}
	for (i = 0; i<n ; i++)
	{
	if (max < a[i])
		{
			max = a[i];
		}
	}
	min = a[0];
	for ( i=1; i<n; i++)
	{
	if (a[i]<= min);
		{
			min = a[i];
		}
	}
	for ( i = 0; i < n; i++)
	{
	if (a[i]==max )
		{
			l=i;
			break;
		}
	}
	for ( i = 0; i < n; i++)
	{
	if (a[i]==min)
		{
			b=i;
			break;
		}
	}
	cout<<b<<" "<<l;
	return 0;
}