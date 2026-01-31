class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x=(int) target;
        for(int i=0;i<letters.size();i++){
            if((int)letters[i]>x){
                return letters[i];
                break;
            }
        }
        return letters[0];
    }
};
