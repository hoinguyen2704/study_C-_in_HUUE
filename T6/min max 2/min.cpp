#include<iostream>
using namespace std;
int main()
{
  int i, n, temp;
  int min;
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số nguyen dương n
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    cout<<"\nNhập vào số nguyên dương n: ";
    cin>>n;
  }
  while(n < 0 && cout<<"\nSố n phải lớn hơn hoặc bằng 0!!");
  temp = n;
  //khởi tạo cho min
  min = n % 10;
  //nếu n = 0 thì min = 0
  if(n == 0)
    min = 0;
  //sử dụng vòng lặp do..while để tìm chữ số nhỏ nhất trong n
  do
  {
    i = n % 10;
    if(i < min)
    {
      min = i;
    }
  }while(n /= 10);
  cout<<"\nChữ số nhỏ nhất trong "<<temp<<" là: "<<min;
}