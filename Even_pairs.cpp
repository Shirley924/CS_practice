#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,M;
	cin>>N>>M;

	if(N>0 && M>0)
		cout<<N*(N-1)/2+M*(M-1)/2;
	else if(N==0)
		cout<<M*(M-1)/2;
	else
		cout<<N*(N-1)/2;

	return 0;
}
