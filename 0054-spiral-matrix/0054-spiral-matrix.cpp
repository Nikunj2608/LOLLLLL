class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    // main loop sabko repeat karne ke liye
    int n = matrix.size();
    int m = matrix[0].size();
    int minr = 0;
    int minc = 0;
    int maxr = n - 1;
    int maxc = m - 1;
    vector<int> v;
    while (minr <= maxr && minc <= maxc )
    {
        // right loop
        for (int j = minc; j <= maxc; j++)
        {
            v.push_back(matrix[minr][j] );
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down loop
        for (int k = minr; k <= maxr; k++)
        {
            v.push_back(matrix[k][maxc]);
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        // left loop maxr fix
        for (int l = maxc; l >= minc; l--)
        {
            v.push_back(matrix[maxr][l]);
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        // up loop minc fix
        for (int p = maxr; p >= minr; p--)
        {
             v.push_back(matrix[p][minc]);
        }
        minc++;
    }
    return v;
}
    };