#include<bits/stdc++.h>
using namespace std;

void find(int);

int main(){

	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		find(n);
	}

	return 0;
}

void find(int n){
	while(1){
		if(n==1){
			cout<<-1<<'\n';
			break;
		}
		int number=0;
		vector <int>digits;
		srand(time(NULL));
		for(int i=n-1;i>0;i++){
			digits.push_back(rand()%9+1);
			number=number+digits[n-i-1]*pow(10,i);
		}
		int j=0;
		while(j<n){
			if(number%digits[j]==0)
				break;
			else
				j++;
			if(j==n)
				cout<<number<<'\n';
		}
		if(j==n)
			break;
		else
			j=0;
	}
	
}
