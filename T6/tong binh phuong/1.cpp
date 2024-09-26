#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y, i, s=0;
    cin>>x>>y;
    for (i=x;i<=y;i++)
    {
        s+=	pow(i,2);
    }
    cout<<s;
    return 0;
}