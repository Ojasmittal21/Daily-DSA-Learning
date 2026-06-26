class Solution {
public:
    int odd(vector<int> &nums,int k){
        if(k<0) return 0;
        int l=0,r=0,c=0,c1=0;
        while(r<nums.size()){
            if(nums[r]%2!=0) c1++;
            while(c1>k){
                if(nums[l]%2!=0) c1--;
                l++;
            }
            c+=r-l+1;
            r++;
        }
        return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return odd(nums,k)-odd(nums,k-1);
    }
};