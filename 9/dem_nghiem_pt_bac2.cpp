#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a==0)
    {
        cout<<"1";
    }
    else
    {
        float delta = b * b - 4 * a * c;
    if (delta < 0)
    {     cout << "0";
    }
    else if (delta == 0)
    {
        cout <<"1";
    }
    else
    {
        cout << "2";
    }
    }
    return 0;
}