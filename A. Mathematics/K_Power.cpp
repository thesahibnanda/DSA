#include<iostream>
#include<cmath>

class Solution
{
    public:
    int Naive_Approach(int x, int n)
    {
        int res=1;
        for(int i=0; i<n; i++)
        {
            res = res*x;
        }
        return res;
    }

    int Reccursive_Smart_Approach(int x, int n)
    {
        if(n==0)
        {
            return 1;
        }
        int temp = Reccursive_Smart_Approach(x, n/2);
        temp = temp*temp;
        if(n%2==0)
        {
            return temp;
        }
        else
        {
            return temp*x;
        }
    }

    int Iterative_Smart_Approach(int x, int n)
    {
        int res = 1;
        while(n>0)
        {
            if(n & 1) // Used To Check If n Is Odd Or Not, Same As (n%2!=0)
            {
                res = res*x;
            }
            x = x*x;
            n = n>>1; // For Dividing With 2, Same As n = n/2
        }
        return res;
    }
};

int main()
{
    int x, n;
    std::cout<<"Enter Number For Naive Approach:" ;
    std::cin>>x;
    std::cout<<"Enter Power For Naive Approach:" ;
    std::cin>>n;
    std::cout<<Solution().Naive_Approach(x, n);
    std::cout<<"\n\nEnter Number For Reccursive Smart Approach:" ;
    std::cin>>x;
    std::cout<<"Enter Power For Reccursive Smart Approach:" ;
    std::cin>>n;
    std::cout<<Solution().Reccursive_Smart_Approach(x, n);
    std::cout<<"\n\nEnter Number For Iterative Smart Approach:" ;
    std::cin>>x;
    std::cout<<"Enter Power For Iterative Smart Approach:" ;
    std::cin>>n;
    std::cout<<Solution().Iterative_Smart_Approach(x, n);
}

// Calculate Power Using 3 Approaches: Naive Approach, Reccursive Smart Approach & Iterative Smart Approach