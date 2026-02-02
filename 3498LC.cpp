class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
       for(int i=0;i<s.size();i++){
        int x = 123-(int)s[i];
        int mas = (i+1)*(x);
        sum+=mas;
       }
       return sum;
    }
};
