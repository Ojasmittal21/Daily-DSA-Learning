class Solution {
public:
    string sortVowels(string s) {
        vector<char> vow;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            vow.push_back(s[i]);
        }
        sort(vow.begin(),vow.end());
        string s2="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                s2+=vow[j]; j++;
            }
            else s2+=s[i];
        }
        return s2;
    }
};