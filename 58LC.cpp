class Solution {
public:
    int lengthOfLastWord(string s) {
      stringstream ss(s);
      string word;
      vector<string> arr;
      while(ss>>word){
        arr.push_back(word);
      }
      string t =arr[arr.size()-1];
      return t.length();
    }
};
