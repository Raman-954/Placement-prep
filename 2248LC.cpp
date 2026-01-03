class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        set<int> s;
        vector<int> ans;
        int n=nums.size();
                    int freq[1001]={0};
        for(int i=0;i<nums.size();i++){
            for(int num:nums[i]){
                freq[num]++;
            }
                       }
                  for(int i=0;i<nums.size();i++){
            for(int num:nums[i]){
               if(freq[num]==n){
                        s.insert(num);
                       }
            }
                       }   
                       ans.insert(ans.begin(),s.begin(),s.end());    
                       return ans;
    }
};
