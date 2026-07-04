class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[n/2];
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==mid) c++;
        }
        if(c==1) return true;
        else return false;
    }
};