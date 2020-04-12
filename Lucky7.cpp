#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string input;
	cin>>input;
	size_t found = input.find("7");
	if (found!=string::npos)
    	cout << "Yes" << endl;
    else cout<<"No"<<endl;
	
	return 0;
}
