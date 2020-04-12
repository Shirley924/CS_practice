#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int GCD(int i,int j,int k){
	return __gcd(__gcd(i,j),k);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int K;
	long long sum=0;
	cin>>K;
	for(int i=1;i<K+1;++i){
		for(int j=1;j<K+1;j++){
			for(int k=1;k<K+1;k++){
				sum+=GCD(i,j,k);
				}
			}
		}
	
	cout<<sum<<endl;
	
	return 0;
}
