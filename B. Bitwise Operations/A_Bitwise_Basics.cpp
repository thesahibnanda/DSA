#include <iostream>

class Solution
{
public:
    int BitwiseAND(int x, int y)
    {
        return (x & y);
    }
    int BitwiseOR(int x, int y)
    {
        return (x | y);
    }
    int BitwiseXOR(int x, int y)
    {
        return (x ^ y);
    }
    int BitwiseLEFTSHIFT(int x, int y)
    {
        return (x << y);
    }
    int BitwiseRIGHTSHIFT(int x, int y)
    {
        return (x >> y);
    }
    int BitwiseNOT(int x)
    {
        return ~x;
    }
};

int main()
{
    int x, y;
    std::cout << "Enter First Number For Bitwise AND, Bitwise OR, Bitwise XOR: ";
    std::cin >> x;
    std::cout << "Enter Second Number For Bitwise AND, Bitwise OR, Bitwise XOR: ";
    std::cin >> y;
    std::cout << "AND: " << Solution().BitwiseAND(x, y);
    std::cout << "\nOR: " << Solution().BitwiseOR(x, y);
    std::cout << "\nXOR: " << Solution().BitwiseXOR(x, y);
    std::cout << "\nLeft Shift: " << Solution().BitwiseLEFTSHIFT(x, y);
    std::cout << "\nRight Shift: " << Solution().BitwiseRIGHTSHIFT(x, y);
    std::cout << "\nEnter Number For Bitwise NOT: ";
    std::cin >> x;
    std::cout << "NOT: " << Solution().BitwiseNOT(x);
    unsigned int z;
    std::cout << "\nEnter Number For Unsigned Bitwise NOT: ";
    std::cin >> z;
    std::cout << "Unsigned NOT: "<< ~z;
}

// All Basic Bitwise Operators Executed
