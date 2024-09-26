#include<iostream>
using namespace std;
int main()
{
  int i, n, temp;
  int max = 0;
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số nguyen dương n
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    cout<<"\nnhap n: ";
    cin>>n;
  }
  while(n < 0 && cout<<"\nSố n phải lớn hơn hoặc bằng 0!!");
  temp = n;
  //nếu n = 0 thì max = 0
  if(n == 0)
    max = 0;
  //sử dụng vòng lặp do..while để tìm chữ số lớn nhất trong n
  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  cout<<max;
}