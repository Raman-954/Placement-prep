class Solution {
public:
    int hammingDistance(int x,int y) {
       int s=x^y;
return __builtin_popcount(s);
    }
};
