#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// In Previous File, The Way Which Produced All Permutations Used An Extra Boolean Array Taking Extra Space Complexity
// This Time We'll Fix This So That All Permuations Are Produced Without Any Extra Space Taken

// Steps
// Assume [1, 2, 3] To Be The Given Array Named `nums`, Its Size Is 3
// Initially There Will Be A Pointer At `nums[0]` That Is 1 In Our Case
// We'll Try Each Element At Zeroth Index, First We'll Swap 1 With 1, Then We'll Take The Pointer To `nums[1]` And Swap 1 With 2
// Now, We'll Take The Pointer To `nums[2]` From Base Case ( [1, 2, 3] ) And Swap 1 With 3
// Now In All 3 Cases We'll Now Try Every Other Thing At Index 1, And Go So On
// This Way We'll Get All Permutations Without Using Any Extra Space
// But Permutations Will Not Be In Sorted Order, So We'll Sort Them In The End


bool includes(vector<vector<int>> all, vector<int> element)
{
    for(vector<int> ele: all)
    {
        if(ele == element)
        {
            return true;
        }
    }

    return false;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void permuteHelper(vector<int>& nums, int index, vector<vector<int>>& result)
{
    if(index == nums.size())
    {
        result.push_back(nums);
        return;
    }
    
    for(int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]); // Swap To Try States
        permuteHelper(nums, index + 1, result); // Taking The Case Forward
        swap(nums[index], nums[i]); // Backtrack: restore the original state
    }
}

vector<vector<int>> permute(vector<int> nums)
{
    vector<vector<int>> result;
    permuteHelper(nums, 0, result);

    { // If We Remove This Block Completely, The Code Will Still Work But It Will Not Be In Sorted Order
        sort(result.begin(), result.end());
    }

    { // If We Remove This Block, Function Will Return Result Instead Of Final Which Has Duplicate Permutations Too
        vector<vector<int>> final;
        for(vector<int> ele: result)
        {
            if(includes(final, ele) == false)
            {
                final.push_back(ele);
            }
        }
        return final;
    }
    
    return result;
}

int main()
{
    vector<int> n = {1, 5, 1};
    vector<vector<int>> all = permute(n);
    for(vector<int> arr: all)
    {
        for(int a: arr)
        {
            cout << a << " ";
        }
        cout << "\n";
    }

    return 0;
}
