class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        int mv=0,mc=0;
        for(auto it:mp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u')
            mv=max(mv,it.second);
            else mc=max(mc,it.second);
        }
        return mv+mc;
    }
};