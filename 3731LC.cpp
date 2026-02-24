class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int x = *min_element(nums.begin(),nums.end());
        int y= *max_element(nums.begin(),nums.end());
        set<int> s(nums.begin(),nums.end());
        set<int> s1;
    for(int i=x+1;i<y;i++){
        if(!s.count(i)){
s1.insert(i);
    }
    }
    vector<int> vec(s1.begin(),s1.end());
    return vec;
    }
};
