#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,sum=0;
	string S;
	cin>>N>>S;
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			for(int k=j;k<N;k++){
				
				if(j-i==k-j)
					continue;
				if(S[i]!=S[j]){
					
					if(S[i]!=S[k])
						if(S[j]!=S[k])
							sum++;
				}
			}
		}
	}
	cout<<sum;
	
	return 0;
}
