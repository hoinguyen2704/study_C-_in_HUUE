#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) 
{
	int n;
	float x, s=0;
	cin>>n>>x;
	for (int i=1;i<=n;i++)
		{
		s+=	pow(x,i);	
		}
	cout<<setprecision(2)<<fixed<<s;
	return 0;
} 
