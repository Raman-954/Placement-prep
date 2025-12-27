class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num>0){
            int digit=num%10;
            arr.push_back(digit);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        int x=arr[0]*10+arr[3];
        int y=arr[1]*10+arr[2];
        return x+y;
    }
};
