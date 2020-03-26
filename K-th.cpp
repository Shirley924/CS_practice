#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void output(int L,int R,int num);
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num,st,nd;
	cin>>num;
	for(int i=0;i<num;i++){
		int count=0;
		cin>>st>>nd;
		for(int L=st-2;L>=0;L--){
			for(int R=st-1;R>L;R--){
				count++;
				if(count==nd)
					output(L,R,num);
			}
		}
	}

	return 0;
}
void output(int L,int R,int num){
	for(int i=0;i<num;i++){
		if(i==L||i==R)
			cout<<'b';
		else
			cout<<'a';
	}
	cout<<endl;
	return;
}
