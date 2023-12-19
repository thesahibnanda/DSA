#include<iostream>
#include<cmath>
#include <algorithm>

class Solution
{
    public:
    long long Naive_Approach(int a, int b)
    {
        long long res = std::max(a, b);

        while(1)
        {
            if((res%a==0) && (res%b==0))
            {
                break;
            }
            res++;
        }
        return res;
    }

    int Smart_Approach(int a, int b)
    {
        int mul = a*b;
        int gcd = hcf(a, b);

        return (mul/gcd);  // hcf() function is defined below 
    }                                // It uses Optimised Euclidean Algorithm Based Approach To Find Highest Common Factor

    private:
    int hcf(int a, int b)
    {
        if(b==0)
        {
            return a;
        }

        return hcf(b, a%b);
    }

};

int main()
{   
    int a, b;
    std::cout<< "Enter Number 1 For Naive Approach:";
    std::cin>> a;
    std::cout<< "Enter Number 2 For Naive Approach:";
    std::cin>> b;
    std::cout<< Solution().Naive_Approach(a, b);
    std::cout<< "\nEnter Number 1 For Smart Approach:";
    std::cin>> a;
    std::cout<< "Enter Number 2 For Smart Approach:";
    std::cin>> b;
    std::cout<< Solution().Smart_Approach(a, b);
}

// Calculates Least Common Multiple Using 2 Approaches: Naive And Smart