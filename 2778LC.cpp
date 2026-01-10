class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=1;i<=nums.size();i++){
            if(nums.size()%i==0){
                int m =nums[i-1]*nums[i-1];
                sum+=m;
            }else{
                continue;
            }
        }
        return sum;
    }
};
