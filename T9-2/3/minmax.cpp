#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, min, max;
    cin>>m>>n;
    int a[m][n];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    min =a[0][0];
    max =0;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; ++j)
        {
            if (a[i][j] > max )
            {
                max = a[i][j];
            }
            if (a[i][j] < min )
            {
                min = a[i][j];
            }
        }
    }
    cout<<min<<" "<<max;
    return 0;
}