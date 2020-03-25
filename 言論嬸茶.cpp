#include <bits/stdc++.h>
using namespace std;
bool check(stack<string>,string);

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  stack <string> s;
  int N, instruction;
  string input;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>instruction>>input;
    switch(instruction){
       case(1):
        s.push(input);
          break;
       case(2):
        s.pop();
          break;
       case(3):
        bool term=check(s,input);
        if(term)
           cout<<"Y";
        else
           cout<<"N";
          break;
    }
  }

  return 0;
}
  bool check(stack<string> s,string input){
   if(s.empty())
     return true;
   else
    for(int i=0;i<s.size();i++){
      if(input.compare(s[i])==0)
        return false;
      else
         continue;
    }
    return true;
  }
