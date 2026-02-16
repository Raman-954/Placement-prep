class Solution {
public:
    int maxFreqSum(string s) {
int freq[256]={};
int freq1[256]={};
for(char ch:s){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        freq[ch]++;
    }else{
        continue;
    }
}
int max=0;
for(char ch:s){
    if(freq[ch]>max){
        max=freq[ch];
    }
}
for(char cha:s){
    if(cha!='a'&&cha!='e'&&cha!='i'&&cha!='o'&&cha!='u'){
        freq1[cha]++;
    }else{
        continue;
    }
}
int max1=0;
for(char cha:s){
    if(freq1[cha]>max1){
        max1=freq1[cha];
    }
}
return max+max1;
    }
};
