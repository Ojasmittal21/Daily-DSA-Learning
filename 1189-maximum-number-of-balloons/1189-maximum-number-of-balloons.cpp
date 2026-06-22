class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(auto it:text){
            mp[it]++;
        }
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(auto it:mp){
            if(it.first=='b') c1+=it.second;
            else if(it.first=='a') c2+=it.second;
            else if(it.first=='l') c3+=it.second;
            else if(it.first=='o') c4+=it.second;
            else if(it.first=='n') c5+=it.second;
        }
        return min({c1,c2,c3/2,c4/2,c5});
    }
};