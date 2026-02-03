class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int sum1=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        for(int i=0;i<k;i++){
            sum1+=nums[nums.size()-i-1];
        }
        return abs(sum-sum1);
    }
};
