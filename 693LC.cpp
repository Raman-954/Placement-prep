class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while(n>0){
            int rem=n%2;
            s+=to_string(rem);
            n/=2;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            if(s[i]-'0'==s[i+1]-'0'){
                return false;
                break;
            }
        }
        return true;
    }
};
