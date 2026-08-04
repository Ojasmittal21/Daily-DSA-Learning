class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int key=nums[i];
            while((key+1)!=nums[i+1]){
                key++;
                ans.push_back(key);
            }
        }
        return ans;
   }
};