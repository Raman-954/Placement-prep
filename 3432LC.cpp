class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            int sumleft=0;
        int sumright=0;
            for(int j=0;j<=i;j++){
                sumleft+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                sumright+=nums[k];
            }
            if((sumleft-sumright)%2==0){
                count++;
            }
        }
        return count;
    }
};
