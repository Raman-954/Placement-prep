class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vec;
        double a = celsius+273.15;
        vec.push_back(a);
        double b = celsius * 1.80 + 32.00;
        vec.push_back(b);
        return vec;
    }
};
