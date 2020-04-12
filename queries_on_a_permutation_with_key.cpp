#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<int> queries={3,1,2,1};
	int m=5,tmp,key;
	map<int,int> q;
        vector<int> ans;
        for(int i=0;i<m;i++){
            q[i+1]=i;
        }
        for(int i=0;i<queries.size();i++){
            int found=q.find(queries[i])->second;
            cout<<found<<endl;
            ans.push_back(q.find(queries[i])->second);
            tmp=q[queries[i]];
            cout<<"tmp:"<<q[queries[i]]<<endl;
            for(map<int,int>::iterator it = q.begin();it!=q.end();it++) 
			{
				if(it->second==0)
				{
					key=it->first;
					cout<<"key:"<<key<<endl;
					break;
				}
			}

            q[queries[i]]=q[key];
            
            q[key]=tmp;
        }
	return 0;
}
