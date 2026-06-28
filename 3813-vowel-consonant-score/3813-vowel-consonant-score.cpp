class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') v++;
            if(s[i]>='a' && s[i]<='z') c++;
        }
         c-=v;
        if(c==0) return 0;
        else return v/c;
    }
};