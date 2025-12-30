class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans= INT_MAX;
        for(int i=0;i<nums.size();i++){
                    int sum=0;
                    int x=nums[i];
        while(x>0){
           int digit=x%10;
sum+=digit;
x/=10;
                    }
        if(sum==i){
            ans = min(ans,i);
        }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
