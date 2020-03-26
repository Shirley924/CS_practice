#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int num,t;
	string b;
        cin>>num;
        for(int i=0;i<num;i++){
		cin>>t>>b;
		int out;
		for(int j=0;j<t;j++){
			cout<<0;
		}
		cout<<endl;
		for(int j=0;j<t;j++){
			out=atoi(b[j]);
			cout<<out;
		}
		cout<<endl;
	}
        return 0;
}
