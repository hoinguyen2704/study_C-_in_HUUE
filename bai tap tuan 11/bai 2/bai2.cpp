#include <bits/stdc++.h>
using namespace std;
int main()
 {
 int n, x, dem=0;
 cin>>n>> x;
 int a[n];
 for (int i=0; i<n; i++)
 {
     cin>>a[i];
 }
 for (int i=0; i<n; i++)
 {
     if( a[i] > x)
     {
         dem++;
     }
 }
 cout<<dem;
 return 0;
 }
