class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        vector<int> out;
        int i=1;
        int sum=0,total=0;
        for(int j=0;j<i;j++){
                sum+=nums[j];
                out.push_back(nums[j]);
            }
            for(int j=i;j<nums.size();j++)
                total+=nums[j];
        
        while(sum<=total){
            out.push_back(nums[i]);
            sum+=nums[i];
            total-=nums[i];
            i++;
        }
        
        return out;
    }
};
