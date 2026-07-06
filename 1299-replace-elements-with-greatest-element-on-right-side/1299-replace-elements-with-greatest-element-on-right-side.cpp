class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        ans[n-1]=-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i+1]>ans[i+1])
            ans[i]=arr[i+1];
            else ans[i]=ans[i+1];
        }
        return ans;
    }
};