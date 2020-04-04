#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int x,y,z,tmp;
	cin>>x>>y>>z;
	tmp=x;
	x=y;
	y=tmp;
	
	tmp=z;
	z=x;
	x=tmp;
	cout<<x<<' '<<y<<' '<<z;
	
	return 0;
}
