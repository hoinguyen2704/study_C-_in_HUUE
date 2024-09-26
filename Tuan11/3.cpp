#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dem=0;
    cin >> n;
     int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
       int b = sqrt(a[i]);
       double c= sqrt(a[i]);
       if (b == c)
       {
           dem++;
       }
    }
    cout <<dem;
    return 0;
}