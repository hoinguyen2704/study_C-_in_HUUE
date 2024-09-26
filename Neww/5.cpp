#include <bits/stdc++.h>
using namespace std;
class mang
{
private:
    int n;
    int *a = new int[n];
    int min, max;

public:
void nhap();
void xuat();
void minmax();
};
void mang::nhap(){
    cout<<"nhap kich thuoc cho mang: ";
    cin>>n;
    cout<<"nhap lan luot "<<n<<" phan tu cho mang: ";
    for (int  i = 0; i < n; i++)
    {
        cin>>*(a+i);
    } 
}
void mang::xuat(){
    cout<<"cac phan tu cua mang: ";
    for (int  i = 0; i < n; i++)
    {
        cout<<*(a+i)<<" ";
    }
    cout<<"\nmin= "<<min;
    cout<<"\nmax= "<<max;
}
void mang::minmax(){
    min=*(a+0);
    max=*(a+0);
     for (int  i = 1; i < n; i++)
    {
        if (*(a+i)<min)
        {
            min=*(a+i);
        }
    }
     for (int  i = 1; i < n; i++)
    {
        if (*(a+i)>max)
        {
            max=*(a+i);
        }
    }
}
int main(int argc, char const *argv[])
{
    mang a;
    a.nhap();
    a.minmax();
    a.xuat();
    cout<<endl;
    system("pause");
    return 0;
}
