#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M,total=0;
	bool check;
	cin>>N>>M;
	int A[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
		total+=A[i];
	}
	if(total%(4*M)==0)
		total/=(4*M);
	else
		total=total/(4*M)+1;
	sort(A,A+N);
	for(int i=N-1;i>N-M-1;i--){
		if(A[i]>=total){
			check=true;
			continue;
		}
		else{
			check=false;
			cout<<"No"<<endl;
		}
		if(check==false)
			break;
	}
	if(check==true)
		cout<<"Yes"<<endl;
	
	return 0;
}
