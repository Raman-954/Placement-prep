class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> arr;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int num:accounts[i]){
                sum+=num;
            }
arr.push_back(sum);
        }
        return *max_element(arr.begin(),arr.end());
    }
};
