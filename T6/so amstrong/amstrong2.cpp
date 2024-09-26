#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N, dem, copy, s=0, k=0,copy_2;
    cin>>N;
    copy = N;
    copy_2=N;
    do
    {
      copy_2 /=10;
      k+=1;
    } 
	while (copy_2 !=0);
    
    do
    {
     dem = copy % 10;
     s+= pow(dem,k);
     copy/=10;
    } 
    while (copy!=0);
    if (N == s)
    	{cout<<"Co";}
    else
    	{cout<<"Khong";}
    return 0;
}