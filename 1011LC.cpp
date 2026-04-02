class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int end=0;
        int ans;
        for(int i=0;i<weights.size();i++){
            if(start<weights[i]){
                start=weights[i];
            }
            end+=weights[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1;
            int sum=0;
            for(int i=0;i<weights.size();i++){
                sum+=weights[i];
                if(sum>mid){
                    count++;
                    sum=weights[i];
                }
            }
            if(count<=days){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
