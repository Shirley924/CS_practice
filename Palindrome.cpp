#include<bits/stdc++.h>
using namespace std;

bool check(string);  //check whether it is palindrome

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        string input;
  	//	char sub[100];
  	//	int len;
        cin>>input;
	int N=input.length();

	bool head=check(input.substr(0,(N-1)/2));
	bool tail=check(input.substr((N+3)/2-1,N-(N+3)/2+1));
	if(head && tail && check(input)){
		cout<<"Yes"<<endl;
	}
	else
		cout<<"No"<<endl;

        /*     len=input.length();
  		strcpy(sub,input.c_str());
  
  		for(int i=0;i<(1+(N-1)/2)/2;i++){
        	if(sub[i]==sub[(N-1)/2-i]){
            	
            }
        }
  		for(int j=(N+3)/2-1;j<N;j++){
        	if(sub[j]==sub[N-j])
        }
	*/  
        return 0;
}

bool check(string s){
	int len=s.length();
	for(int i=0;i<len/2;i++){
		if(s[i]==s[len-i])      //in c++ string is array<char>
			continue;       //continue means to skip the instruction behind and do the next loop
		else
			return false;
	}
	return true;
}
