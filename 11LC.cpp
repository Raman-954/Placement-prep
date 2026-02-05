class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int i=0;
        int j=height.size()-1;
       while(i<=j) {
            int width = j-i;
            int h= min(height[i],height[j]);
            int current=width*h;
            maxi= max(maxi,current);
            height[i]<height[j]?i++:j--;
        }
      return maxi;
    }
};
