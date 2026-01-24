class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int sq = n*n;
        if(sq*w<=maxWeight){
            return sq;
        }
        else{
            return maxWeight/w;
        }
    }
};
