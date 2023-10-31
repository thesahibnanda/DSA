#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;
        for(int num: nums)
        {
            countMap[num]++;
        }
        int maxCount = 0;
        int mostFrequentElement = 0;  // Initialize with a default value

        // Find the element with the maximum count
        for (const auto entry : countMap) {
            if (entry.second > maxCount) {
                maxCount = entry.second;
                mostFrequentElement = entry.first;
            }
        }

        return mostFrequentElement;
    }
        
};


int main()
{
    vector<int> Vector;
    int n;

    cout << "Enter Element In Vector (Enter Non Integer To Break):\n";
    while (cin >> n) {
        Vector.push_back(n);
    }

    cout<<"Most Occuring Element Is: "<< Solution().majorityElement(Vector);
}