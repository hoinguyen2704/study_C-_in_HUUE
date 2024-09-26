#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s, a;
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a = i* (i+1);
        s += 1/ a;
        a=0;
    }
    cout << setprecision (2) <<fixed << s ;
    return 0;
}