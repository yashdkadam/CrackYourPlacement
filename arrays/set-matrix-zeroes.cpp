class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int sum = 0;
        vector<vector<int>> mat = matrix;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 0)
                {
                    fill(matrix[i].begin(), matrix[i].end(), 0);
                    for (int k = 0; k < matrix.size(); k++)
                    {
                        matrix[k][j] = 0;
                    }
                }
            }
        }
    }
};