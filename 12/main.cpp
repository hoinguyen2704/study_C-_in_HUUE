#include <iostream>
using namespace std; 
int main(int argc, char** argv)
{
	int i,n, sum;
	cout<<"nhap vao mot so n "<<endl; cin>>n;
	sum=0;
	for (i=1;i<=n;i++) 
		{
		sum +=i;
		}
	cout<<"tong tu 1 den "<<n<<" la "<<sum; 
	return 0;
}