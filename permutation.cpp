#include<bits/stdc++.h>
using namespace std;

void internal(char*);
void powerset(string,int,vector<bool>,int);
void binarysearch_recursive(int,int*,int,int);
int binearysearch_while(nt,int*,int,int);

int main(){
	ios::syc_with_stdio(false);
	cin.tie(0);
	
	//powerset
	string s;
	vector<bool> check;
	cin>>s;
	powerset(s,s.length(),check,0);

	//binarysearch_recursive
	int arr[100];
	for(int i=0;i<100;i++)
		arr[i]=i+1;
	binarysearch(42,arr,0,99);

	//binarysearch_while
	cout<<binarysearch_while(42,arr,0,99)<<endl;

	return 0;
}

void internal(char *c){
	int len=sizeof(c)/sizeof(c[0]);
	for(int l=0;l<len;l++){
		for(int r=l;r<len;r++)
			//cout該區間所有數
	}
	return 0;
}
void powerset(string c, int N, vector<bool>check, int now){
	if(now==N){
		for(int i=0;i<N;i++){
			if(check[i])//有或沒有
				cout<<c[i]<<" , ";

		}
		cout<<'\n';
	}

	check.push_back(true);
	powerset(c,N,check,now+1);
	check.push_back(false);
	powerset(c,N,check,now+1);
}
void binarysearch_recursive(int target,int *c,int L,int R){
	int i=(L+R)/2;
	if(c[i]==target)
	 cout<<i<<endl;
	else if(c[i]<target)
	 binarysearch(target,c,i+1,R);
	else
	 binarysearch(target,c,L,i);

//	return 0;
}
int binarysearch_while(int target,int *c,int l,int r){
	while(l!=r){
		if(c[(l+r)/2]<target)
			l=(l+r)/2+1;
		else
			r=(l+r)/2;
	}
	return l;
}
