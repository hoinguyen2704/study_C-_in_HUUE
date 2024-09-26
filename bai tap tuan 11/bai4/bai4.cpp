#include <bits/stdc++.h>
using namespace std;
int main()
 {
 int n, m;
 double s=0, min, max=0;
 cin>>m>>n;
 int a[m][n];
 double b[m];
 for(int i=0; i<m; i++)
 {
     for(int j=0; j<n; j++)
 {
     cin>>a[i][j];
 }
 }
 for(int i=0; i<m; i++)
 {
     for(int j=0; j<n; j++)
    {
     s+= a[i][j];
    }
    b[i] = s / n;
    s=0;
 }
 min = b[0];
 for(int i=0; i<m; i++)
 {
     if ( b[i] < min)
     min = b[i];
     if ( b[i] > max)
     max = b[i];
 }
 cout<< setprecision(1)<<fixed<< min<<" "<<max;
 return 0;
 }