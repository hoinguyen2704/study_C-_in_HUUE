#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int M[10];
    int N=10;
    cout<<"nhap gia tri cho cac phan tu: \n";
    for (int i = 0; i < N; i++)
    {
        cout<<"M["<<i<<"]= ";
        cin>>M[i];
    }
    cout<<"mang sau khi nhap la: "<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"M["<<i<<"]= "<<M[i] << endl;
    }
    return 0;
}
