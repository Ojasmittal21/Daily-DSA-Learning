class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        int l=0,r=0,sind=-1,c=0,minl=INT_MAX;
        for(auto it:t){
            mp[it]++;
        }
        while(r<s.size()){
            if(mp[s[r]]>0) c++;
            mp[s[r]]--;
            while(c==t.size()){
                if(r-l+1<minl){
                    minl=r-l+1;
                    sind=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) c--;
                l++;
            }
            r++;
        }
        if(sind==-1) return "";
        else return s.substr(sind,minl);
    }
};