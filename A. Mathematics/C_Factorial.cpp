#include<iostream>
#include<cmath>

class Solution
{   
    public:
    long long factorial_Iterative(long long x)
    {
        if (x==0)
        {
            return 1;
        }
        
        long long response =1;
        for (int i=2; i<=x; i++)
        {
            response = response*i;
        }
        return response;
    }

    long long factorial_Reccursive(long long x)
    {
        if (x==0)
        {
            return 1;
        }

        return x * factorial_Reccursive(x-1);
    }
    
    int digitInFactorial(int x)
    {
        double n=1;
        for(int i=1; i<=x; i++)
        {
            n+=log10(i); // Basic Maths
        }
        return n;
    }
};

int main()
{
    int x;
    std::cout<< "Enter Number: ";
    std::cin>> x;
    std::cout<<Solution().factorial_Iterative(x);
    std::cout<<"\n";
    std::cout<<Solution().factorial_Reccursive(x);
    std::cout<<"\n";
    std::cout<<Solution().digitInFactorial(x);

}

// Calculate Factorial Using 2 Approaches (Iterative & Reccursive) and Calculating Digits In Factorial Using A Smart Approach