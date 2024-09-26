#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[255];
    cin.getline(s, 255);
    int n1 = strlen(s), dem = 0;
     for (int i=0; i < n1; i++)
    {
        char c= s[i];
        if (c!= ' ')
        break;
        dem++;
    }
    for (int i= dem; i < n1; i++)
    {
        char c= s[i];
        putchar (c);
        if (c== ' ')
        break;
    }
    return 0;
}