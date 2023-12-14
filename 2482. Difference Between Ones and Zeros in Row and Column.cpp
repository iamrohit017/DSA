//2482. Difference Between Ones and Zeros in Row and Column Daily POTD 14 DEC 2023


class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<int>oner(m,0);
        vector<int>onec(n,0);

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                oner[i]+=grid[i][j];
                onec[j]+=grid[i][j];

            }
        }



        
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                grid[i][j]= 2*oner[i]+2*onec[j]-(n+m);

            }
        }


        return grid;
    }
};
