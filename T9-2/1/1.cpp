#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j;
    double s;
    cin>>m>>n;
    int a[m][n];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    float b[m];
    for (i=0; i<m; i++)
    {
        s=0;
        for (j=0; j<n; j++)
        {
            s+= a[i][j];
        }
    b[i]=s / n;
    }
    for (i=0; i<m; i++)
    {
        cout<<setprecision(2)<<b[i]<<" ";
    }
    return 0;
}