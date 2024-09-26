#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
	long long sl, dg, sotien, thue;
	string ten;
	cin>>ten>>sl>>dg;
	sotien=sl*dg;
	thue=sotien/10;
	cout<<sotien<<" "<<thue;
	return 0;
}