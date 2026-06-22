class Solution {
public:
   int countFlips(vector<int>& arr) {
        int l = 0, r = arr.size() - 1;
        int flips = 0;

        while (l < r) {
            if (arr[l] != arr[r]) flips++;
            l++;
            r--;
        }
        return flips;
    }
    int minFlips(vector<vector<int>>& grid) {
        int c1=0,c2=0;
        for(int j = 0; j < grid[0].size(); j++) {
            vector<int> col;

    for(int i = 0; i < grid.size(); i++) {
        col.push_back(grid[i][j]);  
    }

    c1+=countFlips(col);
}
        for(int i=0;i<grid.size();i++){
        c2+=countFlips(grid[i]);
        }
        return min(c1,c2);
    }
};