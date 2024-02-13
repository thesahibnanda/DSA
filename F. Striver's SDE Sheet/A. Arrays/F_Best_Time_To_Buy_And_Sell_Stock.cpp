#include <iostream>
#include <vector>

using namespace std;

// Set 2 Variables: MinPrice = Price[0] , MaxProfit = 0
// For Loop To Iterate Array Called Prices From Index 1 To End
//      MaxProfit = Max(MaxProfit, Prices[i]-MinPrice)
//      MinPrice = Min(MinPrice, Prices[i])
// Return MaxProfit

// Deal Edge Case Of Empty Array

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.empty())
        {
            return 0;
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            if( (maxProfit) < (prices[i] - minPrice) )
            {
                maxProfit = prices[i] - minPrice;
            }

            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
        }

        return maxProfit;
    }
};

int main()
{
    return 0;
}

// Leetcode 121: Best Time To Buy And Sell Stock