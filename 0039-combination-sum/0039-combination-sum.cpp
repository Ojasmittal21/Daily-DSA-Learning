class Solution {
public:
    void combination(vector<int> &arr,int i,vector<vector<int>> &ans,vector<int> &ds,int tar){
        if(i==arr.size()){
            if(tar==0){
            ans.push_back(ds);
         }
         return;
        }
        if(arr[i]<=tar){
            ds.push_back(arr[i]);
            combination(arr,i,ans,ds,tar-arr[i]);
            ds.pop_back();
        }
        combination(arr,i+1,ans,ds,tar);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(candidates,0,ans,ds,target);
        return ans;
    }
};