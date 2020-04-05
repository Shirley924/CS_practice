class Solution {
public:
    int numSteps(string s) {
        int num,count=0;
        for(int i=0;i<s.length();++i){
            int tmp=s[i];
            if(tmp==1)
                num+=tmp*pow(2,s.length()-1-i);
        }
        while(num!=1){
            count++;
            if(num%2==0)
                num/=2;
            else
                num+=1;
        }
//      cout<<count<<endl;
        return count;
    }
};
