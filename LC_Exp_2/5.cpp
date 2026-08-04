class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0) 
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto it: rows)
        {
            for(int i=0;i<n;i++)
            {
                if(matrix[it][i]!=0) matrix[it][i]=0;
            }
        }
        for(auto it: cols)
        {
            for(int i=0;i<m;i++)
            {
                if(matrix[i][it]!=0) matrix[i][it]=0;
            }
        }
        
    }
};
