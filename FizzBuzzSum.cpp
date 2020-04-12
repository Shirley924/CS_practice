#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	long long sum=0;
	cin>>N;
	while(N>0){
		if(N%3!=0 && N%5!=0){
			sum+=N;
		}
		--N;
	}
	cout<<sum<<endl;
	
	return 0;
}
