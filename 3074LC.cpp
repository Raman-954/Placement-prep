class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum=0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int p  =sum;
        int sum1=0;
        int count=0;
        for(int i=capacity.size()-1;i>=0;i--){
            sum1+=capacity[i];
            if(sum1<p){
                count++;
            }
        }
        return count+1;
    }
};
