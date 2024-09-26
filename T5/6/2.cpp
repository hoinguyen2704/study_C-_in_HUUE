#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, gia;
    long long t;
    cin>>n;
    switch (n)
    {
    case n<=50: gia = 1600; break;
    case n>=51 && n<=100 : gia = 1700; break;
    case n>= 101 && n<= 200 : gia =2000; break;
    case n>= 201 && n<= 300 : gia = 2500; break;
    case n>= 301: gia = 4000; break;
    }
    t = n * t;
    cout<<t;
    return 0;
}