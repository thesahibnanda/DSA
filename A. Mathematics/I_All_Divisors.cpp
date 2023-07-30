#include<iostream>
#include<cmath>
class Solution
{
    public:
    void Naive_Approach(int n)
    {
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                std::cout<<i<<" ";
            }
        }
    }

    void Unsorted_Smart_Approach(int n)
    {
        for(int i=1; (i*i)<=n; i++)
        {
            if(n%i==0)
            {
                std::cout<< i<<" ";
                
                if(i!=(n/i))
                {
                    std::cout<<n/i<<" ";
                }
            }
            
        }
    }

    void Sorted_Smart_Approach(int n)
    {
        int i;
        for(i=1; (i*i)<n; i++)
        {
            if(n%i==0)
            {
                std::cout<< i<<" ";
            }
        }
        for(;i>=1;i--)
        {
            if(n%i==0)
            {
                std::cout<< n/i<<" ";
            }
        }
    }
};



int main()
{
    int n;
    std::cout<< "Enter Number For Naive Approach: ";
    std::cin>> n;
    Solution().Naive_Approach(n);
    std::cout<< "\nEnter Number For Unsorted Smart Approach: ";
    std::cin>> n;
    Solution().Unsorted_Smart_Approach(n);
    std::cout<< "\nEnter Number For Sorted Smart Approach: ";
    std::cin>> n;
    Solution().Sorted_Smart_Approach(n);
}

// Displays All Divisors Of A Given Number Using 3 Approaches: Naive Approach, Unsorted Smart Approach & Sorted Smart Approach