class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int y=x;
        while(y>0){
            int digit=y%10;
            sum+=digit;
            y/=10;
        }
        if(x%sum!=0){
            return -1;
        }
        return sum;
    }
};
