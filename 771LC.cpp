class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
       unordered_set<char> s(jewels.begin(),jewels.end());
       for(char ch:stones){
        if(s.count(ch)) count++;
       }
        return count;
    }
};
