class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int M = matrix[0].size();
        vector<int> rowmin(m,INT_MAX);
vector<int> colmax(M,INT_MIN);
for(int i=0;i<m;i++){
    for(int j=0;j<M;j++){
        rowmin[i]=min(rowmin[i],matrix[i][j]);
    }
}
for(int j=0;j<M;j++){
    for(int i=0;i<m;i++){
        colmax[j]=max(colmax[j],matrix[i][j]);
    }
}
vector<int> ans;
for(int i=0;i<m;i++){
    for(int j=0;j<M;j++){
      if(matrix[i][j]==rowmin[i]&&matrix[i][j]==colmax[j]){
        ans.push_back(matrix[i][j]);
      }
    }
}
return ans;
    }
};
