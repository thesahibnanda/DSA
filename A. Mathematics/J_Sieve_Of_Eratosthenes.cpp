#include<iostream>
#include<cmath>
#include<vector>

class Solution
{
    public:
    void Naive_Approach(int n)
    {
        for(int i=2; i<=n; i++)
        {
            if(isPrime(i))
            {
                std::cout<<i<<" ";
            }
        }
    }

    void Simple_Sieve_Of_Eratosthenes(int n)
    {
        std::vector<bool> isPrime(n+1, true);
        for(int i=2; (i*i)<=n; i++)
        {
            if(isPrime[i])
            {
                for(int j=2*i; j<=n; j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }
        for(int i=2; i<=n; i++)
        {
            if(isPrime[i])
            {
                std::cout<<i<<" ";
            }
        }
    }

    void Optimised_Sieve_Of_Eratosthenes(int n)
    {
        std::vector<bool> isPrime(n+1, true);
        for(int i=2; i<=n; i++)
        {
            if(isPrime[i])
            {   
                std::cout<<i<<" ";
                for(int j=i*i; j<=n; j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    private:
    bool isPrime(int n)
    {
        if(n==1)
        {
            return false;
        }
        else if(n==2 || n==3)
        {
            return true;
        }
        else if(n%2==0 || n%3==0)
        {
            return false;
        }
        for(int i=5; (i*i)<=n; i+=6)
        {
            if((n%i==0)||(n%(i+2)==0))
            {
                return false;
            }
        }
        return true;  
    }
};


int main()
{
    int n;
    std::cout<<"Enter Number For Naive Approach:" ;
    std::cin>>n;
    Solution().Naive_Approach(n);
    std::cout<<"\nEnter Number For Simple Sieve Of Eratosthenes Approach:" ;
    std::cin>>n;
    Solution().Simple_Sieve_Of_Eratosthenes(n);
    std::cout<<"\nEnter Number For Optimized Sieve Of Eratosthenes Approach:" ;
    std::cin>>n;
    Solution().Optimised_Sieve_Of_Eratosthenes(n);
}

// Calculates All Prime Numbers Before A Given Number Using 3 Approaches: Naive, Simple Sieve Of Eratosthenes & Optimized Sieve Of Eratosthenes Approach