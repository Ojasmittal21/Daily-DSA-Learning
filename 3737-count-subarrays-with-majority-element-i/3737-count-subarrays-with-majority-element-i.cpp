class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int c1=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==target) c1++;
                if(2*c1>j-i+1) c++;
            }
            
        }
        return c;
    }
};