#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> result(n, 1);
        
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] = result[i] * leftProduct;
            leftProduct = leftProduct * nums[i];
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] = result[i] * rightProduct;
            rightProduct = rightProduct * nums[i];
        }

        return result;    
    }
};

int main()
{
    return 0;
}
