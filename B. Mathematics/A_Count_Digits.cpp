#include <iostream>
using namespace std;

class Solution
{
public:
    int countDigits(long long n)
    {
        if (n == 0)
        {
            return 1;
        }
        int count = 0;
        while (n > 0)
        {
            n = n / 10;
            count++;
        }
        return count;
    }
};

int main()
{
    long long x;
    cout << "Enter Number: ";
    cin >> x;
    cout << Solution().countDigits(x);

    return 0; 
}

// Count Digits Of A Given Number