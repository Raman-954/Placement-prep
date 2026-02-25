class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
        }
        for(auto p:mp){
            if(p.second==-1){
                return p.first;
         break;
            }
        }
        return ' ';
    }
};
