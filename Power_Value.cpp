class Solution {
public:
    int getKth(int lo, int hi, int k) {
        int num=hi-lo+1;
        list <int>PS;
        list <int>Order;
        vector <int>power;
        vector <int>order;
        for(int i=lo;i<=hi;i++){
            int count=0,tmp=i;
            while(1){
                if(tmp==1){
                    order.push_back(count);
                    power.push_back(i);
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
        for(int i=0;i<num;i++){
            if(i==0){
                PS.push_back(power[i]);
                Order.push_back(order[i]);
            }
            else if(i==1){
                if(order[i]<Order[0]){
                    Order.push_front(order[i]);
                    PS.push_front(power[i]);
                }
                else{
                    Order.push_back(order[i]);
                    PS.push_back(power[i]);
                }
            }
            else{
                for(int j=1;j<i;j++){
                    if(order[i]<Order[j]&&order[i]>Order[j-1])
                        Order.increase()
                }
            }
        }
        
        for(int j=0;j<k;j++){
            for(int i=lo;i<hi+1;i++){
                
                if(O[i]==order[j]){
                    if(j==k-1){
                        num=i;
                        break;
                    }
                    else
                        O[i]=0;
                }
            }
        }
        return num;
    }
};
