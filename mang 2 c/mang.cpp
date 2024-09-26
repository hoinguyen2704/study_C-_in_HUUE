#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, tong=0;
    cin>>m>>n;
    int a[m][n];
    for (int i=0 ; i<m ; i++)
    {
        for ( int j=0; j<n ; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n ; j++ )
        {
        tong += a[i][j];
        }
        cout<<endl;
    }
    cout << tong;
    return 0;
}