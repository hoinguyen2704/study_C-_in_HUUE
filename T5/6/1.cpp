#include <iostream>
using namespace std;
int main()
{
    int n;
    long long t;
    cin>>n;
    if (n<=50 && n>0)
    {
        t = n*1600;
    }
    else
    {
        if (n>=51 && n<= 100)
        {
            t = ( 50 * 1600) + (n - 50)*1700;
        }
        else
        {
            if (n>= 101 && n<=200)
            {
               t = ( 50 * 1600) + (50*1700) + ( n - 100) * 2000;
            }
            else
            {
                if (n>= 201 && n<= 300)
                {
                     t = ( 50 * 1600) + (50*1700) + (100 * 2000) + (n-200) * 2500;
                }
                else
                {
                     t = ( 50 * 1600) + (50*1700) + (100 * 2000) + (100 * 2500) + (n - 300) * 4000;
                }
            }
        }
    }
    cout<<t;
    return 0;
}
