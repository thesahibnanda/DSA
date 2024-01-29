#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map<string, vector<string>> hashMap;

            for (string str : strs) {
                string cpy = str;
                sort(str.begin(), str.end());
                auto it = hashMap.find(str);

                if (it != hashMap.end()) {
                    it->second.push_back(cpy);
                } else {
                    hashMap[str] = {cpy};
                }
            }

            vector<vector<string>> array;
            
            for (auto it = hashMap.begin(); it != hashMap.end(); it++) {
                array.push_back(it->second);
            }

            return array;
        }
};

int main()
{
    return 0;
}