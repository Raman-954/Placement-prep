class Solution {
public:
    int maxProduct(int num) {
    vector<int> arr;
    while(num>0){
        int digit=num%10;
        arr.push_back(digit);
        num/=10;
    }
    int max=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int p=arr[i]*arr[j];
              if(p>max){
            max=p;
        }
        }
    }
    return max;
    }
};
