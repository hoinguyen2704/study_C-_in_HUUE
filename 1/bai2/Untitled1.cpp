#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    double s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += 1.0 / (( i * (i+1) )) ;
    }
    cout << s ;
    return 0;
}
