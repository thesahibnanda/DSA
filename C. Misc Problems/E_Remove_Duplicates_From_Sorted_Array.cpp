#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        pair<int, vector<int>> removeDuplicates(vector<int> nums) {
            for(int i=0; i<nums.size()-1; i++)
            {
                if(nums[i] == nums[i+1])
                {
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }
            return make_pair(nums.size(), nums);
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

    pair<int, vector<int>> Answer = Solution().removeDuplicates(Vector);
    cout<<"\nSize Of New Vector: "<< Answer.first<<endl;
    cout<<"\nNew Vector: "<<endl;
    for(int num: Answer.second){
        cout<<num<<", ";
    }

    return 0;
}


//Erases Duplicate Elements