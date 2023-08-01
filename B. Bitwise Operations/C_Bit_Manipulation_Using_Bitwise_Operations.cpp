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

    int ValueOfMostSignificantBit(int n)
    {
        int position = LogBase2(n);
        return Power(2, position);
    }

    int XOROfNumbers(int n)
    {
        int rem = n%4;
        if (rem == 0) 
        {
            return n;
        } 
        else if (rem == 1) 
        {
            return 1;
        } 
        else if (rem == 2) 
        {
            return (n + 1);
        } 
        else 
        { 
            return 0;
        }
    }

    private:
    int LogBase2(int n)
    {
        int res=0;
        while((n>>=1)>0)
        {
            res++;
        }
        return res;
    }

    int Power(int x, int n)
    {
        int res = 1;
        while(n>0)
        {
            if(n & 1) // Used To Check If n Is Odd / Even
            {
                res = res*x;
            }
            x = x*x;
            n = n>>1;
        }
        return res;
    }
};

int main()
{
    int n;
    std::cout<<"Enter Number For Checking If It's A Power Of 2: ";
    std::cin>>n;
    std::cout<<"If It's Power Of 2, `1` Will Be Returned Else `0`: "<<Solution().IfPowerOf2(n);
    std::cout<<"\nEnter Number Whose Most Significant Bit You Wanna Check: ";
    std::cin>>n;
    std::cout<<n<<"'s Most Significant Bit's Value Is: "<<Solution().ValueOfMostSignificantBit(n);
    std::cout<<"\nEnter Number Upto Which You Wanna Finc XOR: ";
    std::cin>>n;
    std::cout<<"XOR Upto "<<n<<": "<<Solution().XOROfNumbers(n);
}

// Techniques To Manipulate Bits Of A Number Using Various Bitwise Operations