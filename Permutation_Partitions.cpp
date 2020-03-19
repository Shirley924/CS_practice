#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k,tmp;
	vector <int>line;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>tmp;
		line.push_back(tmp);
	}
	sort(line.begin(),line.end());
	reverse(line.begin(),line.end());
	
	int max=0;
	for(int i=0;i<k;i++){
		max+=line[i];
	}
	cout<<max<<'\n';

	return 0;
}
