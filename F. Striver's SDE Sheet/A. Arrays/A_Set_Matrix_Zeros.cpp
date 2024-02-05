#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        if(matrix.size() == 0)
        {
            return;
        }
        if(matrix[0].size() == 0)
        {
            return;
        }
        vector<int> rows(matrix.size(), 0);
        vector<int> cols(matrix[0].size(), 0);

        for(int i = 0; i<matrix.size(); i++)
        {
            for(int j = 0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for(int p = 0; p<rows.size(); p++)
        {
            for(int q = 0; q<cols.size(); q++)
            {
                if(rows[p] || cols[q])
                {
                    matrix[p][q] = 0;
                }
            }
        }
    }
};

int main() 
{
    return 0;
}

// LeetCode: 73. Set Matrix Zeroes