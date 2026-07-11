class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX,n=nums.size(),maxind=0,minind=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
            if(maxi==nums[i]) maxind=i;
            if(mini==nums[i]) minind=i;
        }
        int front=max(maxind,minind)+1,back=n-min(maxind,minind),both=min((minind+1)+(n-maxind),(maxind+1)+(n-minind));
        return min({front,back,both});
    }
};