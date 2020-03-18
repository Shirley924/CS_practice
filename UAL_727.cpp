#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	stack <char>s;
	char tmp;
	
	while(tmp=cin.get()){
		if(tmp==EOF)
			break;
		else if(tmp==')'){  //pop all
			while(!s.empty()){
				if(s.top()!='(')
					cout<<s.top()<<endl;
				s.pop();
			}
		}
		else if(tmp=='+'){
			if(!s.empty())
			if(s.top()=='*' || s.top()=='/' ||s.top()=='-'){
				while(!s.empty()){
					if(s.top()!='('){
						cout<<s.top()<<endl;
						s.pop();
					}else
						break;
				}
			}
			s.push(tmp);
		}
		else if(tmp=='-'){
			if(!s.empty())
			if(s.top()=='*' || s.top()=='/' ||s.top()=='+'){
				while(!s.empty()){
				if(s.top()!='('){
						cout<<s.top()<<endl;
						s.pop();
					}else
						break;
				}
			}
			s.push(tmp);
		}
		else if(tmp=='*'){
			if(!s.empty())
			if(s.top()=='*' || s.top()=='/'){
				while(!s.empty()){
					if(s.top()!='('){
						cout<<s.top()<<endl;
						s.pop();
					}else
						break;
				}
			}
			s.push(tmp);
		}
		else if(tmp=='/'){
			if(!s.empty())
			if(s.top()=='*' || s.top()=='/'){
				while(!s.empty()){
				if(s.top()!='('){
						cout<<s.top()<<endl;
						s.pop();
					}else
						break;
				}
			}
			s.push(tmp);
		}
		else if(tmp=='('){
			s.push(tmp);
		}
		else
			cout<<tmp<<endl;
	}
	while(!s.empty()){
		if(s.top()!='(')
			cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}