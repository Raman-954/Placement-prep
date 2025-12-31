class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
           bool inc=true;
           bool dec=true;
           for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<0) inc=false;
            if(nums[i]-nums[i-1]>0) dec=false;
           }
           return inc||dec;
    }
};
