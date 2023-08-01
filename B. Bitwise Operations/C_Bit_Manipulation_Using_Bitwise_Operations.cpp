#include<iostream>

class Solution
{
    public:
    bool IfPowerOf2(int n)
    {
        if(n==0)
        {
            return true;
        }
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};

int main()
{
    int n;
    std::cout<<"Enter Number For Checking If It's A Power Of 2: ";
    std::cin>>n;
    std::cout<<"If It's Power Of 2, `1` Will Be Returned Else `0`: "<<Solution().IfPowerOf2(n);
}

// Techniques To Manipulate Bits Of A Number Using Various Bitwise Operations