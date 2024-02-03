#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) 
    {
        int left = 0;
        int right = numbers.size()-1;

        while(left < right)
        {
            int sum = numbers[left] + numbers[right];
            if(sum == target)
            {
                return {left + 1, right + 1};
            }
            else if(sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return {-1};
    }
};

int main()
{
    return 0;
}