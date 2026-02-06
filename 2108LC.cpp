class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            string r = word;
            reverse(r.begin(),r.end());
            if(word==r){
                return word;
                break;
            }
        }
        return "";
    }
};
