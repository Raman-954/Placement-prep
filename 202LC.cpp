class Solution {
public:
    int sumof(int n){
        int sum=0;
        while(n>0){
            int dig=n%10;
            sum+=dig*dig;
            n/=10;
        }
        return sum;
    }
   bool isHappy(int n) {
    unordered_set<int> s;
    while(n!=1 && !s.count(n)){
        s.insert(n);
        n=sumof(n);
    }
if(n==1) return true;
return false;
    }
};
