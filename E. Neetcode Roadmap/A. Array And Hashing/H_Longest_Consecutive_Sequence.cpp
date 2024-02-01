#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.empty())
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int max=0;
        int count = 0;
        for(int i=1; i<nums.size(); i++)
        {
            if((nums[i-1] + 1) == nums[i])
            {
                count++;
            }
            else if(nums[i]!=nums[i-1])
            {
                count = 0;
            }
            if(count>max)
            {
                max = count;
            }
        }
        max++;
        return max;        
    }
};

int main() 
{
    return 0;
}
