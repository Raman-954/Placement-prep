class Solution {
public:
    vector<int> plusOne(vector<int>& vec) {
       for(int i=vec.size()-1;i>=0;i--){
        if(vec[i]<9){
            vec[i]++;
            return vec;
        }
        vec[i]=0;
       }
       vec.insert(vec.begin(),1);
       return vec;
    }
}; 
