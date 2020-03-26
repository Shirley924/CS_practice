#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int num,t,b;
        cin>>num;
        for(int i=0;i<num;i++){
                cin>>t>>b;
                if(t==b){
                        cout<<0<<endl;
                }else if(t<b){
                        cout<<b-t<<endl;
                }else{
                        cout<<b*(t/b+1)-t<<endl;
                }
        }
        return 0;
}

