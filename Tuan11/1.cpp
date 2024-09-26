#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double S = 0;
    int mau = 0;
    for (int i = 1; i<= n; i++){
        mau += i;
        S += 1.0/mau;
    }
    cout << fixed << setprecision (2) << S;
    return 0;
}