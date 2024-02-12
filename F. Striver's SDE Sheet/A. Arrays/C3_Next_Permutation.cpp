#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem: Given a number, find the next permutation of the number
// Approach: Find the first dip from the right, swap it with the next greater number from the right, and sort the elements to the right of the dip

class Solution
{
public:
    void nextPermutation(vector<int>& nums)
    {
        int i;
        for(i = nums.size() - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                break;
            }
        }

        if(i == -1) // No Dip, Means It's Lexicographically The Biggest
        {
            reverseArray(nums);
            return;
        }

        int j;
        for(j = nums.size() - 1; j > i; j--)
        {
            if(nums[j] > nums[i])
            {
                break;
            }
        }

        swap(nums[i], nums[j]);
        sort(nums.begin() + i + 1, nums.end()); // Sort the elements to the right of i
    }
private:

// Reverse the array
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Swap the first and last element, then the second and second last element, and so on

    void reverseArray(vector<int>& nums)
    {
        int left = 0, right = nums.size() - 1;
        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    return 0;
}

// Leetcode 31: Next Permutation