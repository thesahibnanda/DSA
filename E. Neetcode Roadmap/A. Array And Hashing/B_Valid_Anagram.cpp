#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            sortingAlgorithm(s, 0, s.length() - 1);
            sortingAlgorithm(t, 0, t.length() - 1);
            return s == t;
        }

    private:
        void sortingAlgorithm(string &str, int low, int high) {
            if (low < high) {
                int pivotIndex = partition(str, low, high);
                sortingAlgorithm(str, low, pivotIndex - 1);
                sortingAlgorithm(str, pivotIndex + 1, high);
            }
        }

        int partition(string &str, int low, int high) {
            int pivot = str[high];

            int i = low - 1;

            for (int j = low; j < high; j++) {
                if (str[j] < pivot) {
                    i++;
                    swap(str[i], str[j]);
                }
            }
            swap(str[i + 1], str[high]);
            return i + 1;
        }
};

int main()
{
    return 0;
}
