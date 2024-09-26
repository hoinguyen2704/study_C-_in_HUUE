#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
	int n, i;
	cin>>n;
	if(n < 2)
		cout<<"Khong";
	else if(n == 2)
		cout<<"Co";
	else if(n % 2 == 0)
		cout<<"Khong";
	else
	{
		for(i = 3; i <= n; i+=2)
		{
			if(n % i == 0)
				break;
		}
		if(i == n)
			cout<<"Co";
		else
			cout<<"Khong";
	}
	return 0;
}
