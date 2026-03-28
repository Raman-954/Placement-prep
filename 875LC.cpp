class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long  total_hours=0;
            for(int i=0;i<piles.size();i++){
                total_hours+=piles[i]/mid;
                if(piles[i]%mid){
                    total_hours++;
                }
            }
            if(total_hours>h){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};
