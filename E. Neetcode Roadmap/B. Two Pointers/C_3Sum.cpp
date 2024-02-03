#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        mergeSort(nums, 0, nums.size() - 1);

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicates

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                if (currentSum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (currentSum > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return result;
    }

private:
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int middle = left + (right - left) / 2;

            mergeSort(nums, left, middle);
            mergeSort(nums, middle + 1, right);
            merge(nums, left, middle, right);
        }
    }

    void merge(vector<int>& nums, int left, int middle, int right) {
        int n1 = middle - left + 1;
        int n2 = right - middle;
        vector<int> leftArray(n1);
        vector<int> rightArray(n2);

        for (int i = 0; i < n1; i++) {
            leftArray[i] = nums[left + i];
        }
        for (int j = 0; j < n2; j++) {
            rightArray[j] = nums[middle + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                nums[k] = leftArray[i];
                i++;
            } else {
                nums[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            nums[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < n2) {
            nums[k] = rightArray[j];
            j++;
            k++;
        }
    }
};

int main()
{
    return 0;
}