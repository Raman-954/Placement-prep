class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set s(nums2.begin(),nums2.end());
        int count = 0;
        vector<int> vec(s.begin(),s.end());
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<vec.size();j++){
            if(nums1[i]==vec[j]){
                count++;
            }
            }
        }
        ans.push_back(count);
        int count1=0;
        unordered_set s1(nums1.begin(),nums1.end());
        vector<int> arr(s1.begin(),s1.end());
        for(int i=0;i<nums2.size();i++){
for(int j=0;j<arr.size();j++){
            if(nums2[i]==arr[j]){
                count1++;
            }
}
        }
        ans.push_back(count1);
        return ans;
    }
};
