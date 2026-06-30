class Solution {
public:
    int numberOfSubstrings(string s) {
        int c=0;
        int last_seen[3]={-1,-1,-1};
        for(int i=0;i<s.size();i++){
            last_seen[s[i]-'a']=i;
            c+=1+min({last_seen[0],last_seen[1],last_seen[2]});
        }
        return c;
    }
};