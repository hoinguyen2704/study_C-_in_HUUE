#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int thang, nam, ngay;
    cin >> thang >> nam;
    if (thang == 1 ||thang ==3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang ==12)
    {
        ngay =31;
    }
    if ( thang == 4 || thang == 6|| thang == 9 || thang == 11)
    {ngay =30;}
    if (thang == 2)
  {
    /*  if (nam < 100)
      { if  ( nam >= 4 && nam % 4 ==0 )
         {ngay=29;}
        else
          {ngay=28;}     
      }  */
    if ( (nam %  100 == 0)? ( nam % 400 ==0 && nam %4 ==0 ) : (nam % 4== 0) )
    //if ((nam > 4 && nam % 4 == 0 && nam <= 100 )? && nam % 100 ==0 && nam % 400 == 0)
    
    //if ( nam >= 100 && nam % 4==0 && nam %100 ==0 && nam %400 ==0 )
    
        {ngay=29;}
    else
       {ngay=28;}
  }
    cout<<ngay;
    return 0;
}