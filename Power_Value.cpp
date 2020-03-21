class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector <pair<int,int>>order;
        for(int i=lo;i<=hi;i++){
            int count=0,tmp=i;
            while(1){
                if(tmp==1){
                    order.push_back({count,i});
                    break;
                }
                else{
                    if(tmp%2==0){
                        tmp=tmp/2;
                        count++;
                    }
                    else{
                        tmp=3*tmp+1;
                        count++;
                    }
                }
            }
        }
        //compare
        sort(order.begin(),order.end());
        return order[k-1].second;
    }
};
