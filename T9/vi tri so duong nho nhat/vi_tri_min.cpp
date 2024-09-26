#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i=0, duongmin,dem =0 ;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
		cin>> a[i];
	}
    int min1 = 0;
    for ( i = 0; i < n; i++)
    {
     if (a[i] > min1)
     {
		duongmin = a[i];
 	    break;
	  }
     else
     {duongmin = 0;}
    }
    if (duongmin > 0)
       {
          for ( i = 0; i < n; i++)
          {
             if (a[i] < duongmin && a[i] > 0 )
                 {
                 duongmin = a[i];
                 dem = i;
                 break;
                }
          }
       }
    else
        {dem= -1;}
    cout<<dem;
    return 0;
}
