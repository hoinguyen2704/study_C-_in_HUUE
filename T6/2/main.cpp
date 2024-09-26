#include <iostream>
using namespace std;
int main()
{
	int x, y, i, s=0;
	cin>>x>>y;
	for (i=x; i<=y; i++)
	{
		if (i%2==0)
		 {	continue;}
		s+=i;
	}
	cout<<s;
	return 0;
}
