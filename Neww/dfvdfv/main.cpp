#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	double T,L,H,HsT,HsL,HsH, DTB;
	cin >>T>>L>>H;
	cin>>HsT>>HsL>>HsH;
	DTB = (T*HsT + L*HsL + H*HsH)/(HsT + HsL + HsH);
	cout<<setprecision(1)<<fixed<<DTB;
	return 0;
}