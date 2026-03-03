class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> vec;
        for(int num:nums){
            int sum=0;
            while(num>0){
                int digit=num%10;
                sum+=digit;
                num/=10;
            }
            vec.push_back(sum);
        }
        return *min_element(vec.begin(),vec.end());
    }
};
