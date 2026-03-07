class Solution {
public:
    string reverseVowels(string s) {
           int i=0;
           int j=s.size()-1;
           while(i<j){
            while(i<j && (tolower(s[i])!='a'&&tolower(s[i])!='e'&&tolower(s[i])!='o'&&tolower(s[i])!='u'&&tolower(s[i])!='i' )){
                i++;
            }
                        while(i<j && (tolower(s[j])!='a'&&tolower(s[j])!='e'&&tolower(s[j])!='o'&&tolower(s[j])!='u'&&tolower(s[j])!='i' )){
                j--;
            }
            if(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
            }
           }
           return s;
    }
};
