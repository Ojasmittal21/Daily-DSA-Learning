class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=INT_MIN;
        vector<int> suffmax(n);
        suffmax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffmax[i]=max(nums[i],suffmax[i+1]);
        }
        for(int i=0;i<n-k;i++){
            ans=max(ans,nums[i]+suffmax[i+k]);
        }
        return ans;
    }
};