class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                ans.push_back(arr[i]);
                         ans.push_back(arr[i]);       
            }else{
                ans.push_back(arr[i]);
            }
        }
        int n = arr.size();
        arr.clear();
            arr.insert(arr.begin(),ans.begin(),ans.begin()+n);
    }
};
