#include <iostream>
#include <vector>
#include <limits>


class Solution {
public:
    std::vector<int> mergeNewVector(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
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

        // Copy remaining elements from nums1, if any.
        while (pointer1 < m) {
            answerVector.push_back(nums1[pointer1]);
            pointer1++;
        }

        // Copy remaining elements from nums2, if any.
        while (pointer2 < n) {
            answerVector.push_back(nums2[pointer2]);
            pointer2++;
        }

        return answerVector;
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

    std::vector<int> Answer = Solution().mergeNewVector(Vector1, Vector1.size(), Vector2, Vector2.size());

    for (int num : Answer) {
        std::cout << num << ", ";
    }

    return 0;
}


// Approach To Merge Sorted Vectors In C++ By Using An Additional Vectors