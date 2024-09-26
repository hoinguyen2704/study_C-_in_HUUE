#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float min = a;
    
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    
    cout << min;
    return 0;
}
