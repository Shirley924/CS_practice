#include<bits/stdc++.h>
using namespace std;

void palindrome(string);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num,len;
	string s;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>s;
		palindrome(s);
	}

	return 0;
}

void palindrome(string tmp){
	list <char>L;
	for(int i=0;i<tmp.length();i++){
		L.push_back(s[i]);
	}
	//找回文
}
