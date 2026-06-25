class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]=-1;
        }
        int l=0,r=0,mlen=0;
        while(r<s.size()){
            if(mp[s[r]]!=-1){
                if(mp[s[r]]>=l){
                    l=mp[s[r]]+1;
                }
            }
            int len=r-l+1;
            mlen=max(mlen,len);
            mp[s[r]]=r;
            r++;
        }
        return mlen;
    }
};