#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double x, y, z, t, tong;
	cin>>x>>y>>z;
	cin>>t;
	tong=x+y+z;
	if (tong<t)
		cout<<"Fail";
	else
		cout<<"Pass";
	return 0;
}
