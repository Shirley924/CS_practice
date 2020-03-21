#include<bits/stdc++.h>
using namespace std;
struct Shop{
	int kinds;
	vector <long int>size;
	vector <int>price;
	vector <long long int>amount;
	
}shop;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,M,Q,tmp;
	vector <int>V;
	vector <int>U;
	vector <int>W;
	vector <long long int>A;
	cin>>N;
	shop[N];
	for(int i=0;i<N;i++){
		cin>>shop[i].kinds;
		for(int j=0;j<shop[i].kinds;j++){
			cin>>tmp;
			shop[i].size.push_back(tmp);
			cin>>tmp;
			shop[i].price.push_back(tmp);
			cin>>tmp;
			shop[i].price.push_back(tmp);
		}
	}
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>tmp;
		U.push_back(tmp);
		cin>>tmp;
		V.push_back(tmp);
		cin>>tmp;
		W.push_back(tmp);
	}
	cin>>Q;
	for(int i=0;i<Q;i++){
		cin>>tmp;
		A.push_back(tmp);
	}
	
	while(m>=0){
		M--;
		for(int i=0;i<shop[V[M]].kinds;i++){
			for(int j=0;j<shop[U[M]].kinds;j++){
				if(shop[V[M]].size[i]<=shop[U[M]].size[j]+W[M]){
					//
				}
			}
		}
	}
	
	return 0;
}
