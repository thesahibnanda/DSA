#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> result;

        for(int nums: set1)
        {
            if(set2.find(nums) != set2.end())
            {
                result.push_back(nums);
            }
        }

        return result;
    }
};

int main(void)
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {3,2,2};

    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);

    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}