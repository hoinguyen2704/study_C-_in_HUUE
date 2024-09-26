#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    double a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    double min1=a;
    if (min1>b)
       {min1=b;}
    if (min1>c)
       {min1=c;}   
    if (min1>d)
       {min1=d;}
    if (min1>e)
       {min1=e;}

    double max=a;
    if (max < b)
       {max = b;}
    if (max < c)
       {max = c;}   
    if (max < d)
       {max = d;}
    if (max < e)
      {max = e;}
    
    double min2=max;

    if ((min2 > a) && (a != min1))
       {min2 = a;}
    if ((min2 > b) && (b != min1))
       {min2 = b;}
    if ((min2 > c) && (c != min1))
       {min2 = c;}   
    if ((min2 > d) && (d != min1))
       {min2 = d;}
    if ((min2 > e) && (e != min1))
       {min2 = e;}
    cout<<min2;
    return 0;
}