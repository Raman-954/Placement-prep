class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
unordered_set<int> s(arr2.begin(),arr2.end());
vector<int> vec;
for(int num:arr1){
    if(!s.count(num)){
vec.push_back(num);
    }else{
        continue;
    }
}
sort(vec.begin(),vec.end());
vector<int> nums;
for(int i=0;i<arr2.size();i++){
    for(int j=0;j<arr1.size();j++){
        if(arr2[i]==arr1[j]){
            nums.push_back(arr1[j]);
        }
    }
}
nums.insert(nums.end(),vec.begin(),vec.end());
return nums;
    }
};
