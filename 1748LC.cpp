class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int f[101] = {0};
        for(int x: nums) f[x]++;
        int sum = 0;
        for(int i=0;i<=100;i++){
            if(f[i] == 1) sum += i;
        }
        return sum;
    }
};
