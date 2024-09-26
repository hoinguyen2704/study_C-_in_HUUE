#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long n, lg, th;
    cin>>n;
    if (n<10000000)
    {
       th=0;
    }
    else
    {
        if (n>= 10000000 && n< 15000000)
        {
            th = 0.1 * n;
        }
        else 
        {
            if (n>= 15000000 && n<= 30000000)
            {
               th = 0.2 * n;
            }
            else
            {
                th = 0.3 * n;
            }
        }
    }
    lg = n - th;
    cout<<th<<" "<<lg;
    return 0;
}
