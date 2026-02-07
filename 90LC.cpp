class Solution {
public:
void rec(vector<int> &nums,vector<int> &ans,vector<vector<int>> &allsubsets,int i){
        if(i==nums.size()){
            allsubsets.push_back(ans);
            return;
        }        
        ans.push_back(nums[i]);
        rec(nums,ans,allsubsets,i+1);
        ans.pop_back();
        int index=i+1;
        while(index<nums.size() &&nums[index]==nums[index-1]){
            index++;
        }
        rec(nums,ans,allsubsets,index);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubsets;
        vector<int> ans;
        rec(nums,ans,allsubsets,0);
        return allsubsets;
    }
};
