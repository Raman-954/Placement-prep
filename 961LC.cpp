class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     int n = nums.size()/2;
     int freq[10001]={0};
for(int num:nums){
    freq[num]++;
}
for(int num:nums){
    if(freq[num]==n){
        return num;
    }
}
return 0;
    }
};
