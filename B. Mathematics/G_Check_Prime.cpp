#include<iostream>
#include<cmath>
using namespace std;
class Solution
{
    public:
    bool Naive_Approach(int n)
    {
        if(n==1)
        {
            return false;
        }
        else if (n==2)
        {
            return true;
        }
        for(int i=2; i<n; i++)
        {
            if(n%2==0)
            {
                return false;
            }
        }
        return true;
    }

    bool Optimised_Naive_Approach(int n)
    {
        if(n==1)
        {
            return false;
        }
        else if (n==2)
        {
            return true;
        }
        for(int i=2; i<=ceil(n/2); i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }

    bool Smart_Approach(int n)
    {
        if(n==1)
        {
            return false;
        }
        else if (n==2)
        {
            return true;
        }
        for(int i=2;(i*i)<=n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;

    }

    bool Optimised_Smart_Approach(int n)
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
    cout<< "Enter Number For Naive Approach:";
    cin>> n;
    cout<< Solution().Naive_Approach(n);
    cout<< "\nEnter Number For Optimized Naive Approach:";
    cin>> n;
    cout<< Solution().Optimised_Naive_Approach(n);
    cout<< "\nEnter Number For Smart Approach:";
    cin>> n;
    cout<< Solution().Smart_Approach(n);
    cout<< "\nEnter Number For Optimised Smart Approach:";
    cin>> n;
    cout<< Solution().Optimised_Smart_Approach(n);
}

// Check If A Number Is A Prime Number, Using 4 Approaches: Naive, Optimised Naive, Smart & Optimised Smart Approach.