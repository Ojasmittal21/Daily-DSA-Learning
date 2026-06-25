class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,mlen=0,mfreq=0;
        unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            mfreq=max(mfreq,mp[s[r]]);
            if(r-l+1-mfreq>k){
                mp[s[l]]--;
                l++;
            }
            if(r-l+1-mfreq<=k){
                mlen=max(mlen,r-l+1);
            }
            r++;
        }
        return mlen;
    }
};