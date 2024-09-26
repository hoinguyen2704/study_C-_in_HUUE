#include <bits/stdc++.h>
using namespace std;
int main()
 {
 string s1, s2, scpy, scpy2;
 getline(cin, s1 );
 getline(cin, s2);
 int a= s1.length(), b= s2.length(),  k=0, dem =0, k2=0, dem2=0;
 if (a!=b)
 cout<<"khong";
 else
 {
     for (int i=0; i<a; i++)
     {
         scpy = s2.substr(i,1);
         k= s1.find(scpy,0);
         if ( k >=0 )
         {
             dem ++;
         }
         else
         {
            break;
         }
     }
      for (int i=0; i<a; i++)
     {
         scpy2 = s1.substr(i,1);
         k2= s2.find(scpy2,0);
         if ( k2 >=0 )
         {
             dem2 ++;
         }
         else
         {
            dem2 += 0;
         }
     }
     if ( dem ==dem2)
    cout<<"co"<<endl;
    else
    cout<<"khong"<<endl;
 }
return 0;
 }