#include <iostream>

class Solution
{
    public:
        std::pair<int, int> Swap(int a, int b)
        {
            a = a ^ b;
            b = b ^ a;
            a = a ^ b;
            return std::make_pair(a, b);
        }
};

int main()
{
    int a, b;
    std::cout<<"Enter Value of Number 1:";
    std::cin>>a;
    std::cout<<"Enter Value of Number 2:";
    std::cin>>b;
    std::pair<int, int> swappedNumbers = Solution().Swap(a, b);
    std::cout <<"Number 1: "  << swappedNumbers.first << "\nNumber 2: " << swappedNumbers.second;
}



// Let's Suppose Both Numbers 2 And 3
// a = 2 And b = 3
// First, a XOR b Will Happen And Will Be Saved As a
// So 10 XOR 11 Will Be 01 in a
// Now, b XOR a Will Happen And Will Be Saved As b
// So 11 XOR 01 Will Happen And Will Be Saved In b Which Is 10 i.e. 2
// Now, a XOR b Will Happen And Will Be Saved As a
// So 01 XOR 10 Will Be 11 in a i.e. 3
// Hence Numbers Are Swapped
