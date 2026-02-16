class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> avg;
        int n=nums.size();
        int k=n/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            avg.push_back((nums[i]+nums[n-1-i])/2.0);
        }
        sort(avg.begin(),avg.end());
        return avg[0];
    }
};
