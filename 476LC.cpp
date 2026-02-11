class Solution {
public:
    int findComplement(int num) {
       int cur_bit=0;
       int res=0;
       while(num>0){
        if((num&1)==0){
            res|=(1<<cur_bit);
        }
        num>>=1;
        cur_bit++;
       }
       return res;
    }
};
