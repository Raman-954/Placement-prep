class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int count=0;int c=0;
        // for(int num:nums){
        //     if(count==0){
        //         c=num;
        //     }count+=(num==c)?1:-1;
        // }
        // return c;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
