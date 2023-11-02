#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
    public:

        vector<int> sortFrequecy(vector<int> nums)
        {
            map<int, int> countFrequency;
            for(int num: nums)
            {
                countFrequency[num]++;
            }

            vector<pair<int, int>> sortedItem(countFrequency.begin(), countFrequency.end());

            std::sort(sortedItem.begin(), sortedItem.end(), customCompare);

            vector<int> answer;

            for(pair<int, int> item: sortedItem)
            {
                answer.push_back(item.first);
            }

            return answer;


        }
    private:
        static bool customCompare(pair<int, int>& a, pair<int, int>& b)
        {
            return a.second>b.second; // Change It From '>' To '<' For Increasing Order
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

    cout<<"Sorted on The Basis of Frequency (Non Increasing Order): "<<endl;
    vector<int> nums = Solution().sortFrequecy(Vector);
    for(int num: nums)
    {
        cout<< num<< ", ";
    }

}