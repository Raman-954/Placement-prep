class Solution {
public:
    int alternateDigitSum(int n) {
        string str= to_string(n);
       reverse(str.begin(),str.end());
       int m = stoi(str);
       int sum=0;
       int count=0;
       while(m!=0){
        int digit=m%10;
        if(count%2==0){
sum+=digit;
        }else{
            sum-=digit;
        }
        count++;
m/=10;
       }
       return sum;
    }
};
