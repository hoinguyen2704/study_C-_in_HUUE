#include <stdio.h>
#include<math.h>
#include <conio.h>
int main()
{
    int a, n, giaithua=1;
    float tong=1.0;
    scanf ("%d%d", &a,&n);
    for (int  i = 1; i <=n; i++)
    {
        giaithua*=i;
        tong+=pow(a,i)/giaithua;
    }
    printf ("tong la: %f",tong );
    return 0;
}