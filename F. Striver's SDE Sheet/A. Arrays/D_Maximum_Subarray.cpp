#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// We'll Use Kadane's Algorithm

// Make To 2 Variables:
// maxTillNow = 0 
// actualMax = INT_MIN (`INT_MIN` Is The Smallest Value Integer Data Type Can Store)

// For Loop Iterating Array `a`
// maxTillNow += a[i]
// actualMax = max(actualMax, maxTillNow)
// if (maxTillNow < 0): maxTillNow = 0

// return actualMax


class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int actualMax = INT_MIN;
        int maxTillNow = 0;

        for(int i=0; i<nums.size(); i++)
        {
            maxTillNow += nums[i];

            actualMax = returnMax(maxTillNow, actualMax);

            if(maxTillNow<0)
            {
                maxTillNow = 0;
            }
        }

        return actualMax;
    }
private:
    int returnMax(int a, int b)
    {
        if (a>b)
        {
            return a;
        }
        return b;
    }
};

int main()
{
    return 0;
}

// Leetcode 53: Maximum Subarray