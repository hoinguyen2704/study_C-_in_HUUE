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
    
    double max2=min1;

    if ((max2 < a) && (a != max))
       {max2 = a;}
    if ((max2 < b) && (b != max))
       {max2 = b;}
    if ((max2 < c) && (c != max))
       {max2 = c;}   
    if ((max2 < d) && (d != max))
       {max2 = d;}
    if ((max2 < e) && (e != max))
       {max2 = e;}
    cout<<max2;
    return 0;
}