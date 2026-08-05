class Solution {
public:
    void combination(vector<int> &arr,int ind,vector<vector<int>> &ans,vector<int> &ds,int tar){
            if(tar==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>tar) break;
            ds.push_back(arr[i]);
            combination(arr,i+1,ans,ds,tar-arr[i]);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combination(candidates,0,ans,ds,target);
        return ans;
    }
};