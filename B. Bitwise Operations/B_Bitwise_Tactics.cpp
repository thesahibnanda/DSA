#include<iostream>

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

};

int main()
{
    int num, n;
    std::cout<<"Enter Number For -> Setting, Unsetting, Toggling Bit And Check If The Bit Is Set: ";
    std::cin>>num;
    std::cout<<"Enter N For -> Setting, Unsetting, Toggling Bit And Check If The Bit Is Set: ";
    std::cin>>n;
    std::cout<<"After Setting Bit: "<< Solution().SetBit(num, n)<<"\nAnd After Unsetting Bit: "<<Solution().UnsetBit(num, n)<<"\nAnd After Toggling Bit: "<<Solution().Toggle(num, n)<<"\nCheck If The Nth Bit Is Set: "<<Solution().IsBitSet(num, n);
    std::cout<<"\nEnter Number For Floor Division And Multiplication By 2: ";
    std::cin>>n;
    std::cout<<"Floor Divide By 2: "<<Solution().FloorDivideBy2(n);
    std::cout<<"\nMultiply By 2: "<<Solution().MultiplyBy2(n);

}

// Basic Bitwise Tactics