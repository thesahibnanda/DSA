#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        unordered_map<int, int> count;
        for(int i: nums)
        {
            if(i==0)
            {
                count[0]++;
            }
            else if(i==1)
            {
                count[1]++;
            }
            else
            {
                count[2]++;
            }
        }

        for(int index = 0; index < nums.size(); index++)
        {
            if(count[0])
            {
                nums[index] = 0;
                count[0]--;
            }
            else if(count[1])
            {
                nums[index] = 1;
                count[1]--;
            }
            else if(count[2])
            {
                nums[index] = 2;
                count[2]--;
            }
        }
    }
};

int main() 
{
    return 0;
}

// Leetcode 75: Sort Colors
