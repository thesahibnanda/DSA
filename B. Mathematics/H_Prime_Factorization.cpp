#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution
{
    public:
    void Naive_Approach(int n)
    {
        for(int i=2; i<=n; i++)
        {
            if (isPrime(i))
            {
                int x = i;
                while(n%x==0)
                {
                    cout<< i <<" ";
                    x = x*i;
                }
            }
        }
    }

    void Smart_Approach(int n)
    {
        if(n<=1)
        {
            return ;
        }
        for(int i=2; (i*i)<=n; i++)
        {
            while(n%i==0)
            {
                
                n = n/i;
                cout<<i<<" ";
            }
        }
        if(n>1)
        {
            cout<<n;
        }
    }

    void Optimized_Smart_Approach(int n)
    {
        if(n<=1)
        {
            return ;
        }
        while(n%2==0)
        {
            cout<<2<<" ";
            n = n/2;
        }
        while(n%3==0)
        {
            cout<<3<<" ";
            n = n/3;
        }
        for(int i=5; (i*i)<=n; i+=6)
        {
            while(n%i==0)
            {
                
                n = n/i;
                cout<<i<<" ";
            }
            while(n%(i+2)==0)
            {
                
                n = (n/(i+2));
                cout<<i+2<<" ";
            }
        }
        if(n>3)
        {
            cout<<n;
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
    cout << "Enter Number For Prime Factorization Using Naive Approach: ";
    cin >> n;
    Solution().Naive_Approach(n);
    cout << "\nEnter Number For Prime Factorization Using Smart Approach: ";
    cin >> n;
    Solution().Smart_Approach(n);
    cout << "\nEnter Number For Prime Factorization Using Optimised Smart Approach: ";
    cin >> n;
    Solution().Optimized_Smart_Approach(n);
}

// Calculates All Prime Factors Of A Given Number Using 3 Approaches: Naive, Smart And Optimized Smart Approach