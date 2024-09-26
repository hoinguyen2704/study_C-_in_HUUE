#include <iostream>
using namespace std;
int main()
{
    int i, n, min, max=0;
    do 
    {cin>>n;}
    while (n<0);
    min = n % 10;
    if (n==0)
    {
      min = 0;
      max =0;
    }
    do
    {
       i =n %10;
       if (i< min)
            {
                min = i;
            }
       if (i>max)
            {
                max=i;
            }
       
    } 
    while (n /= 10);
    cout<<min<<" "<<max;
    return 0;
}