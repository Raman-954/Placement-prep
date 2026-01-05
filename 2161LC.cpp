class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> ans;
    vector<int> ans1;
    vector<int> ans2;
     for(int i=0;i<nums.size();i++){
        if(nums[i]<pivot){
            ans.push_back(nums[i]);
        }
       }

           for(int i=0;i<nums.size();i++){
        if(nums[i]==pivot){
            ans1.push_back(nums[i]);
        }
       }

       for(int i=0;i<nums.size();i++){
        if(nums[i]>pivot){
            ans2.push_back(nums[i]);
        }
       }
       ans.insert(ans.end(),ans1.begin(),ans1.end());
       ans.insert(ans.end(),ans2.begin(),ans2.end());
       return ans;
    }
};
