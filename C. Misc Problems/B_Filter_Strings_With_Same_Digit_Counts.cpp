#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool hasSameDigitCount(const std::string& str) {
        std::unordered_map<char, int> digitCount;

        for (char ch : str) {
            if (isdigit(ch)) {
                digitCount[ch]++;
            }
        }

        int prevCount = -1;
        for (const auto& pair : digitCount) {
            if (prevCount == -1) {
                prevCount = pair.second;
            } else if (prevCount != pair.second) {
                return false;
            }
        }

        return true;
    }

    std::vector<std::string> filterStrings(const std::vector<std::string>& arr) {
        std::vector<std::string> result;
        for (const std::string& str : arr) {
            if (hasSameDigitCount(str)) {
                result.push_back(str);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    std::vector<std::string> inputList;
    std::string inputStr;

    std::cout << "Enter Strings (Type `exit` To Finish Input):";
    while (true) {
        std::cin >> inputStr;
        if (inputStr == "exit") {
            break;
        }
        inputList.push_back(inputStr);
    }

    std::vector<std::string> result = solution.filterStrings(inputList);

    std::cout << "\nStrings With The Same Digit Counts:" << std::endl;
    for (const std::string& str : result) {
        std::cout << str << std::endl;
    }

    return 0;
}
