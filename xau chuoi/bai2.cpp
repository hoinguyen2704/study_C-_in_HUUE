#include <bits/stdc++.h>
using namespace std;
int main()
 {
  char *s1=new char;
  char *s2=new char;
  cin.getline(s1, 550);
  int length = 0;
  while(s1[length] != '\0') {
      length++;
   }
  int  a = length, i=0;
  for(i=0; i< length; i++)
  {
      --a;
       s2[i]= s1[a];
  }
  s2[i]='\0';
    a=strcmp ( s1, s2);
    if (a==0)
    cout<<"Yes";
    else
     cout<<"No";
  //s2 = s1.substr(0,a);
  //strcpy(a1, s1);
 //cout<<a1;
return 0;
 }
