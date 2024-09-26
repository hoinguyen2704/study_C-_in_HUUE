#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, s, i;
    cin>>n;
    for ( i = 0; i <= n; i++)
    {
        s+= i;
    }
    cout<<s;
    return 0;
}