#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int ia = (int)a; 
    if (ia >= 97 && ia <= 122) {
        ia -= 32;
    }
    else if (ia >= 65 && ia <= 90) {
        ia += 32;
    }
    cout<<(char)ia;

    return 0;
}