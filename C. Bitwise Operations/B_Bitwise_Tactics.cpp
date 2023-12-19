#include<iostream>
#include<utility>

class Solution
{
    public:
    int SetBit(int num, int n)
    {
        int Bit = 1<<(n-1);
        return (num | Bit); 
    }

    int UnsetBit(int num, int n)
    {
        int Bit = 1<<(n-1);
        Bit = ~Bit;
        return (num & Bit);
    }

    int Toggle(int num, int n)
    {
        int Bit = 1<<(n-1);
        return (num ^ Bit);
    }

    bool IsBitSet(int num, int n)
    {
        int temp = 1 << (n - 1);
        if ((num & temp) > 0)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int FloorDivideBy2(int n)
    {
        return n>>1;
    }

    int MultiplyBy2(int n)
    {
        return n<<1;
    }

    int LogBase2(int n)
    {
        // Works Only On 32 Bit Integer
        int res = 0;
        while((n>>=1)>0)
        {
            res++;
        }
        return res;
    }

    int FlipBit(int n)
    {
        int value = ~0;
        int flipped = value - n;
        return flipped;
    }

    std::pair<int, int> SwapNumbers(int a, int b) 
    {
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    return std::make_pair(a, b);
    }
};

int main()
{
    int num, n, num1, num2;
    std::cout<<"Enter Number For -> Setting, Unsetting, Toggling Bit And Check If The Bit Is Set: ";
    std::cin>>num;
    std::cout<<"Enter N For -> Setting, Unsetting, Toggling Bit And Check If The Bit Is Set: ";
    std::cin>>n;
    std::cout<<"After Setting Bit: "<< Solution().SetBit(num, n)<<"\nAnd After Unsetting Bit: "<<Solution().UnsetBit(num, n)<<"\nAnd After Toggling Bit: "<<Solution().Toggle(num, n)<<"\nCheck If The Nth Bit Is Set: "<<Solution().IsBitSet(num, n);
    std::cout<<"\nEnter Number For Flipping Bits, Log base 2, Floor Division And Multiplication By 2: ";
    std::cin>>n;
    std::cout<<"Floor Divide By 2: "<<Solution().FloorDivideBy2(n);
    std::cout<<"\nMultiply By 2: "<<Solution().MultiplyBy2(n);
    std::cout<<"\nLog Base 2: "<<Solution().LogBase2(n);
    std::cout<<"\nFlipping Bits: "<<Solution().FlipBit(n);
    std::cout << "\nEnter The First Number For Swapping: ";
    std::cin >> num1;
    std::cout << "Enter The Second Number For Swapping: ";
    std::cin >> num2;
    std::cout << "Before Swapping: Number 1 => " << num1 << ", Number 2 => " << num2 << std::endl;
    std::pair<int, int> result = Solution().SwapNumbers(num1, num2);
    num1 = result.first;
    num2 = result.second;
    std::cout << "After swapping: Number 1 => " << num1 << ", Number 2 => " << num2 << std::endl;

}

// Basic Bitwise Tactics