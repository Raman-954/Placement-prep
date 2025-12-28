class Solution {
public:
    int pivotInteger(int n) {
 vector<int> arr;
 for(int i=1;i<=n;i++){
arr.push_back(i);
 }
 int totalsum=((arr.size())*(arr.size()+1))/2;
 int leftsum=0;
 for(int i=0;i<arr.size();i++){
    int rightsum=totalsum-leftsum-arr[i];
    if(leftsum==rightsum){
        return arr[i];
    }
    leftsum+=arr[i];
 }
 return -1;
    }
};
