#include <bits/stdc++.h>
using namespace std;
int main()
 {
 int n, dem=0, min, max, i;
 cin>>n;
 int a[n];
 for (int i=0; i<n; i++)
 {
     cin>>a[i];
 }
 min = a[0]; max =a[0];
 for ( i=0; i<n; i++)
 {
     if( a[i] >= max)
     {
         max = a[i];
     }
     if (a[i] <= min)
     {
         min = a[i];
     }
 }
 for ( i=0; i<n; i++)
 {
     if (min == a[i])
     {
         dem++;
         break;
     }
 }
 cout<<i<<" ";
 dem=0;
 for ( i=0; i<n; i++)
 {
     if (max == a[i])
     {
         dem++;
         break;
     }
 }
 cout<<i;
 return 0;
 }