#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {    
            vector<int> sortedNums(nums);
            quickSort(sortedNums, 0, sortedNums.size()-1);
            int low = 0;
            int high = sortedNums.size()-1;
            while(low < high)
            {
                int currentSum = sortedNums[low] + sortedNums[high];
                if(currentSum == target)
                {
                    int index1 = findIndex(nums, sortedNums[low], -1);
                    int index2 = findIndex(nums, sortedNums[high], index1);
                    return {index1, index2};
                }
                else if(currentSum > target)
                {
                    high--;
                }
                else 
                {
                    low++;
                }
            }
            return {-1};
        }
    private:
        void quickSort(vector<int>& nums, int low, int high)
        {
            if(low < high)
            {
                int pivotIndex = partition(nums, low, high);
                quickSort(nums, low, pivotIndex-1);
                quickSort(nums, pivotIndex+1, high);
            }
        }

        int partition(vector<int>& nums, int low, int high)
        {
            int pivot = nums[high];
            int i = low - 1;
            for(int j = low; j < high; j++)
            {
                if(nums[j] < pivot)
                {
                    i++;
                    swap(nums[i], nums[j]);
                }
            }
            swap(nums[i+1], nums[high]);
            return i+1;
        }

        int findIndex(vector<int>& nums, int value, int skipIndex)
        {
            auto it = find(nums.begin(), nums.end(), value);
            while(it != nums.end() && distance(nums.begin(), it) == skipIndex) {
                it = find(it + 1, nums.end(), value);
            }
            if(it != nums.end())
            {
                return distance(nums.begin(), it);
            }
            return -1;
        }
};

int main() 
{
    return 0;
}
