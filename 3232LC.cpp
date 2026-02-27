class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sum+=nums[i];
            }if(nums[i]>=10 && nums[i]<=99){
                sum1+=nums[i];
            }
        }
        if(sum==sum1){
            return false;
        }
        return true;
    }
};
