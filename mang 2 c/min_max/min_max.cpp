#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, m, n, k, min, max;
    cin>>m>>n>>k;
    int a[m][n];
     for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    if (k>=m)
    {
        min = -1;
        max = -1;
    }
    else
    { 
    min =a[k][0];
    max =0;
    
    for (j=0; j<n; ++j)
        {
            if (a[k][j] > max )
            {
                max = a[k][j];
            }
            if (a[k][j] < min )
            {
                min = a[k][j];
            }
        }
    }
   cout<<min<<" "<<max;
    return 0;
}