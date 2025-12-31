class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        string s=to_string(num);
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.end());
        if(s[s.size()-1]=='0'){
            return false;
        }
        else{
        int x = stoi(s);
         if(x==num){
    return true;
}
     return false;
        }
    }
};
