class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    int freq[2001]={0};
        for(int num:arr){
            freq[num+1000]++;
        }
       unordered_set<int> s;
       for(int i=0;i<2001;i++){
        if(freq[i]>0){
if(s.count(freq[i])) return false;
s.insert(freq[i]);
        }
       }
        return true;
    }
};
