#include <iostream>
using namespace std; 
int main() 
{
	int sum=0, n;
	cout<<"nhap n "<<endl;
	cin>>n;
	 for (int i=1; i<=n;i++)
	 {
	 	sum+=i;
		if (sum>=9)
			break;
	  } 
	cout<<"tong la "<<sum<<endl;  
	return 0;
}
