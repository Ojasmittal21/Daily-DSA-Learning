class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vow;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vow.push_back(s[i]); c++;
        }}
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            s[i]=vow[c-1];
            c--;
            }
        }
        return s;
    }
};