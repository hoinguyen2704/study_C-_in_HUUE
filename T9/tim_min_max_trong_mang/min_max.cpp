#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
      cin>> a[i];
    }
    int min = a[0], max = a[0];
    for ( i = 1; i < n; i++)
    {
     if (a[i] >= max)
     {
         max = a[i];
     }
     if (a[i] <= min)
     {
         min = a[i];
     }
    }
    cout << min<<" "<<max;
    return 0;
}