#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long int N,K;
	cin>>N>>K;
	N%=K;
	if(N<=K/2)
		cout<<N<<endl;
	else
		cout<<K-N<<endl;
	
	return 0;
}
