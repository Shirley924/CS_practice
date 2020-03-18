#include<bits/stdc++.h>
using namespace std;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int n,m,k,tape;
        vector <int>broken;
        vector <int>block;
        cin>>n>>m>>k;

        for(int i=0;i<n;i++){
                broken.push_back(0);
                cin>>broken[i];
        }
        tape=broken[n-1]-broken[0];
        
        for(int i=0;i<n-1;i++){
        	block.push_back(broken[i+1]-broken[i]);
        }
        sort(block.begin(),block.end());
        reverse(block.begin(),block.end());
        
        for(int i=0;i<k-1;i++){      //it gets wrong from here
        	tape=tape-block[i];
        }
        tape+=k;

		if(tape<=m)
        	cout<<tape<<'\n';
        else
	      	cout<<m<<'\n';

        return 0;
}
