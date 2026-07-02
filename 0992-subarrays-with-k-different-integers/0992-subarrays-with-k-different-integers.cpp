class Solution {
public:
    int sub(vector<int> &nums,int k){
        int l=0,r=0,c=0;
        unordered_map<int,int> mp;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            c+=r-l+1;
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return sub(nums,k)-sub(nums,k-1);
    }
};