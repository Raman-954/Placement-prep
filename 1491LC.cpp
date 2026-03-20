class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        salary.pop_back();
        salary.erase(salary.begin(),salary.begin()+1);
        double sum = 0;
        for(int num: salary){
            sum+=num;
        }
        return sum/salary.size();
    }
};
