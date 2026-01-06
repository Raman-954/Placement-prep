class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int sum=0;
            int y = i;
            while(y>0){
                int digit=y%10;
sum+=digit;
y/=10;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};
