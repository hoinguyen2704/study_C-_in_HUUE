#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i, n, sum;
	cout<<"nhap vao so n"<<endl; cin>>n;
	 i=1; sum=0;
	 while(i<=n) 
		 {
		 	sum+=i; 
		 	i++ ;
		 }
	cout<<sum; 
	return 0;
}
