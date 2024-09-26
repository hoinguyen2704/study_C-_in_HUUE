#include <iostream>
using namespace std;
int main()
{
    int n, x, k=0, i=0;
    cin>>n>>x;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            k++;
        } 
    }
    cout<<k;
    return 0;
}