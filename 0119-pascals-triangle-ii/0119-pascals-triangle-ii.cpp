class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int m = rowIndex + 1;
    vector<vector<int>> v;
    for (int i = 1; i <= m; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }
    vector<int> s;
    // generate
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
            if (i==m-1)
            {
                
                s.push_back(v[i][j]);
            }
            
        }
    }
    return s;
    }
};