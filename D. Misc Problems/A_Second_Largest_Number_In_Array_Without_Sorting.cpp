#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int findSecondLargest(std::vector<int> arr) {
        if (arr.size() < 2) {
            std::cerr << "Input vector should have at least two elements." << std::endl;
            return -1; // Return an error code or handle it as needed.
        }

        int largest = arr[0];
        int second_largest = INT_MIN;

        for (int element : arr) {
            if (element > largest) {
                second_largest = largest;
                largest = element;
            } else if (element > second_largest && element < largest) {
                second_largest = element;
            }
        }

        return second_largest;
    }
};

int main() {
    std::vector<int> Array;
    int input;
    
    std::cout << "Enter Integers (Enter A Non-Integer To Stop):" ;
    
    while (std::cin >> input) {
        Array.push_back(input);
    }
    
    int result = Solution().findSecondLargest(Array);
    
    if (result != -1) {
        std::cout << "The Second Largest Number Is: " << result << std::endl;
    }

    return 0;
}

// Time Complexity: O(n)