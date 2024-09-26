#include <iostream>
using namespace std;
main()
{
    int i, n, max =0;
    cout<<"nhap mot so :"; cin>>n;
    int A[n];
        
    for (i=0; i<n; i++)
    {
        cout<<"nhap vao phan tu thu "<<i<<" ";
        cin>>A[i];
    }
    for (i=0; i<n; i++)
    {
        if (A[i]>= max)
         {
             max=A[i];
         }
    }
    cout<<"so lon nhat trong mang la: "<<max;
    return 0;
}