class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1) return ans;
        for(int i=0;i<numRows-1;i++)
        {
            vector<int>row;
            row.push_back(1);
            for(int j=0;j<i;j++) row.push_back(ans[i][j]+ans[i][j+1]);
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};