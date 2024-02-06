#include <iostream>
#include <vector>

using namespace std; 

// Explanation Of The Problem And Approch Used
// You Have Given An Array Of Integers And` You Have To Find The Next Lexographical Permutation Of The Given Array
// Eg. [3, 1, 2] => [3, 2, 1]
// In Easy Language, We'll Need All Permutations In Sorted Order And Return The Next Permutation Of The Given Array According To The Order

// First We'll Learn How To Create All Permutations Of The Given Array, We'll Do It Using A Boolean Vector , Boolean Vector Will Tell If The Element Is Used Or Not
void permuteHelper(vector<int>& nums, vector<vector<int>>& result, vector<bool>& flag, vector<int>& current)
{
    if(nums.size() == current.size())
    {
        result.push_back(current);
        return;
    }

    for(int i = 0; i<nums.size(); i++)
    {
        if(flag[i] == true)
        {
            continue;
        }
        flag[i] = true;
        current.push_back(nums[i]);
        permuteHelper(nums, result, flag, current);
        flag[i] = false;
        current.pop_back();
    }
}

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

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> result;
    vector<bool> flag(nums.size(), false);
    vector<int> current;
    permuteHelper(nums, result, flag, current);

    { // Empty Curly Braces Are Used To Create A New Scope, So That We Can Use Same Variable Names Again
        vector<vector<int>> final;
        for(vector<int> ele: result)
        {
            if(includes(final, ele) == false)
            {
                final.push_back(ele);
            }
        }
        return final;
    } // If We Remove This Block, Function Will Return Result Instead Of Final Which Has Duplicate Permutations Too

    return result;
}

int main()
{
    vector<int> nums = {1, 1, 1};
    vector<vector<int>> all = permute(nums);
    for(vector<int> ele: all)
    {
        for(int a: ele)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}