class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> vec;
        unordered_set<int> s;
        for(int num:nums){
            if(!s.count(num)){
            s.insert(num);
            }else{
                vec.push_back(num);
            }
        }
        return vec;
    }
};
