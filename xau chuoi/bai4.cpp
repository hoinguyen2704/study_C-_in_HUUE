#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s, cpy, cpy2;
   getline(cin,s);
   int a= s.length(), i, dem=0, c,k;
    k= s.find(' ',0);
    if ( k==0)
    dem =0;
    if ( k > 0)
    dem = 1;
   for (i=0; i< a; i++)
   {
       c= s[i+1];
        if (s[i] == ' ' and ( (c >= 65 and c<= 80) or ( c>= 97 and c<= 122) ))
        {
            dem++;
        }
   }
    cout<<dem;
    return 0;
}