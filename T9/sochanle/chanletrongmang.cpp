#include <iostream>
using namespace std;
int main()
{
    int n, c=0, l=0, i=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        if (a[i] % 2==0)
        {
            c++;
        }
        else
        {
            l++;
        }
        
    }
    cout<<c<<" "<<l;
    return 0;
}