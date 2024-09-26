#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int row, col;
    cin>>row>>col;
    int M[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; i < col; j++)
        {
            M[i][j]=rand()%100;
        } 
    }
    cout<<"mang sau khi nhap ngau nhien: \n";
    for (int i = 0; i < row; i++)
        {
           for (int j = 0; j < col; j++)
           {
               cout<<M[i][j]<<"\t";
           }
           cout<<endl;
        }
    return 0;
}
