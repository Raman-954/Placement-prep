class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left=0;
        int right=0;
        vector<int> ans;
       for(int num:nums){
        right+=num;
       }
       for(int i=0;i<nums.size();i++){
        right-=nums[i];
        int p=abs(left-right);
               ans.push_back(p);
        left+=nums[i];
       }
       return ans;
           }
};
