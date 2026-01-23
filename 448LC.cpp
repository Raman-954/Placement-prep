class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
    for(int i=1;i<=nums.size();i++)
arr.push_back(i);
    set<int> s(nums.begin(),nums.end());
    vector<int> vec;
    for(int num:arr){
        if(!s.count(num))
        vec.push_back(num);
    }
    return vec;
    }
};
