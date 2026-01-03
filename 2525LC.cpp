class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
bool bulky = (1LL*length*width*height>=1000000000LL||length>=10000||width>=10000||height>=10000);
bool heavy=(mass>=100);
if(bulky && heavy) return "Both";
if(heavy) return "Heavy";
if(bulky) return "Bulky";
return "Neither";
    }
};
