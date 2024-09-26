#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    double n, s, i=0;
    cin>>n;
    for (i = 0; i <= n; i++)
    {
        s+= 1 / ( 2*i + 1 );
    }  
   cout<<setprecision(2)<<fixed<<s;
    return 0;
}