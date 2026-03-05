class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
sum+=num;
        }
        int sum1=0;
        for(int num:nums){
            while(num>0){
                int digit=num%10;
                sum1+=digit;
                num/=10;
            }
        }
        return abs(sum-sum1);
    }
};
