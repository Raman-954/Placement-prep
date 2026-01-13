class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr;
        int sum=0;
        arr.push_back(sum);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            arr.push_back(sum);
        }
        return *max_element(arr.begin(),arr.end());
    }
};
