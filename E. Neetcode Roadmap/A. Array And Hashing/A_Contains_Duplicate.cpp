#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Solution Begins
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            unordered_set<int> seen;
            for(int i : nums)
            {
                if (seen.find(i) != seen.end())
                {
                    return true;
                }
                else
                {
                    seen.insert(i);
                }
            }
            return false;
        }
};

int main()
{
    return 0;
}