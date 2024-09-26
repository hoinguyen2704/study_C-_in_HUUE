#include <iostream>
using namespace std;
int main()
{
    int i, n, max =0, j, k, min;
    cin>>n;
    int A[n];
      for (i=0; i<n; i++)
    {
        cin>>A[i];
    } 
    for (i=0; i<n; i++)
    {
        if (A[i]> max)
         {
             max=A[i];
             j = i;
         }
    }
    min = A[0];
    for ( i = 1; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            k=i;
        }
    }  
    cout<<k<<" "<<j;
    return 0;
}