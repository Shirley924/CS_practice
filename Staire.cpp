#include<bits/stdc++.h>
#define endl '\n';

using namespace std;

int way(int,int);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,k;
	cin>>N,k;
	
	cout<<way(N,k)<<endl;

	return 0;
}

int way(int N,int k){
	if(N<=2 && k==1)
		return 1;
	else if(N>2 && k>1)
		return (way(N-1,k-1)+way(N-2,k-1))%(10^9+9);
	else if(N>2 && k==1)
		return 0;
}
