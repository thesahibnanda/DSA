#include <iostream>
#include <vector>
#include <limits>

class Solution {
public:
    std::vector<int> mergeNewVector(std::vector<int> nums1, int m, std::vector<int> nums2, int n) {
        std::vector<int> answerVector;
        int pointer1 = 0, pointer2 = 0;

        while (pointer1 < m && pointer2 < n) {
            if (nums1[pointer1] <= nums2[pointer2]) {
                answerVector.push_back(nums1[pointer1]);
                pointer1++;
            } else {
                answerVector.push_back(nums2[pointer2]);
                pointer2++;
            }
        }

        while (pointer1 < m) {
            answerVector.push_back(nums1[pointer1]);
            pointer1++;
        }

        while (pointer2 < n) {
            answerVector.push_back(nums2[pointer2]);
            pointer2++;
        }

        return answerVector;
    }

    void mergeWithoutVector(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int pointer1 = m - 1, pointer2 = n - 1, mergedIdx = m + n - 1;

        while (pointer1 >= 0 && pointer2 >= 0) {
            if (nums1[pointer1] >= nums2[pointer2]) {
                nums1[mergedIdx] = nums1[pointer1];
                pointer1--;
            } else {
                nums1[mergedIdx] = nums2[pointer2];
                pointer2--;
            }
            mergedIdx--;
        }

        // If there are remaining elements in nums2, copy them to nums1.
        while (pointer2 >= 0) {
            nums1[mergedIdx] = nums2[pointer2];
            pointer2--;
            mergedIdx--;
        }
    }
};

int main() {
    std::vector<int> Vector1, Vector2;
    int n;

    std::cout << "Enter Element In Vector 1 (Enter Non Integer To Break):\n";
    while (std::cin >> n) {
        Vector1.push_back(n);
    }

    // Clear input buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter Element In Vector 2 (Enter Non Integer To Break):\n";
    while (std::cin >> n) {
        Vector2.push_back(n);
    }

    std::cout << "Solution Using Merging Approach That Requires New Vector" << std::endl;
    std::vector<int> Answer1 = Solution().mergeNewVector(Vector1, Vector1.size(), Vector2, Vector2.size());

    for (int i = 0; i < Answer1.size(); i++) {
        std::cout << Answer1[i];
        if (i < Answer1.size() - 1) {
            std::cout << ", ";
        }
    }

    std::cout << "\n\nSolution Using Merging Approach That Doesn't Require New Vector" << std::endl;
    Solution().mergeWithoutVector(Vector1, Vector1.size(), Vector2, Vector2.size());

    for(int i=0; i<Vector1.size()+Vector2.size(); i++)
    {
        std::cout<<Vector1[i]<<", ";
    }

    return 0;
}
