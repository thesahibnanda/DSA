#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool Palindrome(long long x)
    {
        long long reverse = 0; 
        long long temp = x;    
        while(temp > 0)
        {
            long long lastDigit = temp % 10; 
            reverse = reverse * 10 + lastDigit;
            temp = temp / 10;
        }
        return (x == reverse);
    }
};

int main(){
    long long x;
    cout << "Enter Number:";
    cin >> x;
    cout << Solution().Palindrome(x);
    return 0;
}

// Palindrome Checker For A Given Number