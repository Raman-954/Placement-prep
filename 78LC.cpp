class Solution {
public:
void rec(vector<int> &nums,vector<int> &ans,vector<vector<int>> &allsubsets,int i){
  if(i==nums.size()){
    allsubsets.push_back({ans});
    return;
  }
  ans.push_back(nums[i]);
  rec(nums,ans,allsubsets,i+1);
  ans.pop_back();
  rec(nums,ans,allsubsets,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;
        rec(nums,ans,allsubsets,0);
        return allsubsets;
    }
};
