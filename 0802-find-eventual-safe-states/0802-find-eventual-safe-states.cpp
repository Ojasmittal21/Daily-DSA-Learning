class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>> adjrev(graph.size());
        vector<int> indeg(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            for(auto it:graph[i]){
// reversed edges i->it   it->i
                adjrev[it].push_back(i);
                indeg[i]++;
            }
        }
        queue<int> q;
        vector<int> safenode;
        for(int i=0;i<graph.size();i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safenode.push_back(node);
            for(auto it:adjrev[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        sort(safenode.begin(),safenode.end());
        return safenode;
    }
};