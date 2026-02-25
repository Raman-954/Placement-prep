class Solution {
public:
    int maxCoins(vector<int>& piles) {
   sort(piles.begin(),piles.end());
   int left=0;
   int right=piles.size()-1;
   int sum=0;
   int round=piles.size()/3;
   while(round--){
    right--;
    sum+=piles[right];
    right--;
    left++;
   }
   return sum;
    }
};
