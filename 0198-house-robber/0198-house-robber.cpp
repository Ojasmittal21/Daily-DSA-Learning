class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=0,prev=0;
        for(int i=0;i<nums.size();i++){
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int notake=0+prev;
            int curr=max(pick,notake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};