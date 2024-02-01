#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) 
        {
            for(int i=0; i<9; i++)
            {
                if (!isValidRow(board, i) || !isValidColumn(board, i) || !isValidSubgrid(board, i))
                {
                    return false;
                }
            }
            return true;
        }

    private:
        bool isValidRow(const vector<vector<char>>& board, int row) 
        {
            vector<int> seen(10, 0);
            
            for(int j=0; j<9; j++)
            {
                char current = board[row][j];
                if (current != '.')
                {
                    int digit = current - '0';
                    if (seen[digit] == 1)
                    {
                        return false;
                    }
                    seen[digit] = 1;
                }
            }
            return true;
        }

        bool isValidColumn(const vector<vector<char>>& board, int col) 
        {
            vector<int> seen(10, 0);
            
            for(int i=0; i<9; i++)
            {
                char current = board[i][col];
                if (current != '.')
                {
                    int digit = current - '0';
                    if (seen[digit] == 1)
                    {
                        return false;
                    }
                    seen[digit] = 1;
                }
            }
            return true;
        }

        bool isValidSubgrid(const vector<vector<char>>& board, int subgrid) 
        {
            vector<int> seen(10, 0);
            
            int startRow = 3 * (subgrid / 3);
            int startCol = 3 * (subgrid % 3);
            
            for(int i=startRow; i<startRow+3; i++)
            {
                for(int j=startCol; j<startCol+3; j++)
                {
                    char current = board[i][j];
                    if (current != '.')
                    {
                        int digit = current - '0';
                        if (seen[digit] == 1)
                        {
                            return false;
                        }
                        seen[digit] = 1;
                    }
                }
            }
            return true;
        }
};

int main() 
{
    return 0;
}
