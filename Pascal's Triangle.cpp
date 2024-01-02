class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++)
        {
            vector<int> cur(i+1, 1);
            for(int k=1; k<i; k++)
            {
                 cur[k] = (ans[i-1][k] + ans[i-1] [k-1]);

            }
            ans.push_back(cur);

        }
        return ans;
    }
};
