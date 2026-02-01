class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=0;
        int min1=INT_MAX;
        int min2=INT_MAX;
        sum+=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2){
                min2=nums[i];
            }
        }
        sum+=min1;
        sum+=min2;
        return sum;
    }
};
