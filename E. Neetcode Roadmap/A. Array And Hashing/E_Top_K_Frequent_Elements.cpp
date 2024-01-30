#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> topK;
        for(int i: nums)
        {
            topK[i]++;
        }

        vector<pair<int, int>> freqVector(topK.begin(), topK.end());

        sort(freqVector.begin(), freqVector.end(), freqCompare);

        vector<int> ansK;
        int count = 0;
        for(pair<int, int> i: freqVector)
        {
            count++;
            ansK.push_back(i.first);
            if(count==k)
            {
                break;
            }
        }
        return ansK;
    }
private:
    static bool freqCompare(const pair<int, int>& a, const pair<int, int>& b) 
    {
        return b.second < a.second;
    }
};

int main()
{
    return 0;
}