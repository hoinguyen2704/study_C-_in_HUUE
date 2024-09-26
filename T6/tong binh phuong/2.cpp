#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, s=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        s+=	pow(i,2);
    }
    cout<<s;
    return 0;
}