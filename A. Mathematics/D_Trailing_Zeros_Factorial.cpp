#include<iostream>
#include<cmath>

class Solution
{
    public:
    int NaiveApproach(int n)
    {
        if(n<5)
        {
            return 0;
        }
        int res = 1;
        for(int i=2; i<=n; i++)
        {
            res = res*i;
        }
        int count=0;
        while(res%10 == 0)
        {
            res = res/10;
            count++;
        }
        return count;
    }

    int SmartApproach(int n)
    {
        int res =0;
        for(int i=5; i<=n; i*=5)
        {
            res = res + (n/i);
        }
        return res;
    }
};

int main()
{
    std::cout<<"Enter Number For Naive Approach:";
    int x;
    std::cin>> x;
    std::cout<< Solution().NaiveApproach(x);
    std::cout<<"\n\nEnter Number For Smart Approach:";
    std::cin>> x;
    std::cout<< Solution().SmartApproach(x);
}

// Calculating Number Of Trailing Zeros In A Factorial Using A Naive And A Smart Approach