class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0};
        for(int num:nums){
            freq[num]++;
        }
         int max = 0;
         for(int num:nums){
            if(freq[num]>max){
                max = freq[num];
            }
         }
         int count=0;
         for(int num:nums){
            if(freq[num]==max)
            count++;
         }
         return count;
    }
};
