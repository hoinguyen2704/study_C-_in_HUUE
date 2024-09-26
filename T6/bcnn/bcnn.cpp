#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, bcnn, i=0;
    cin>>a>>b>>c>>d;
    int max = (a>b? a:b);
    max = (max > c? max:c);
    max = ( max > d? max:d);
    for ( i = max; i <= a*b*c*d; i++)
    {
        if (i%a==0 && i%b==0 && i%c==0 && i%d==0)
        {
            bcnn = i;
            break;
        }
        
    }
    cout<<bcnn;
    return 0;
}