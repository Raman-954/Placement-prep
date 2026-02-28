class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        while(!nums.empty()){
            int x = *min_element(nums.begin(),nums.end());
            auto it = find(nums.begin(),nums.end(), x);
if (it != nums.end()) {
    nums.erase(it);   
}
            int y= *min_element(nums.begin(),nums.end());
                       auto it1 = find(nums.begin(),nums.end(), y);
if (it1 != nums.end()) {
    nums.erase(it1);   
}
            arr.push_back(y);
            arr.push_back(x);
        }
        return arr;
    }
};
