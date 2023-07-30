#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int Naive_Approach(int a, int b)
    {
        int res = min(a, b);
        while (res > 0)
        {
            if (a % res == 0 && b % res == 0)
            {
                break;
            }
            res--;
        }
        return res;
    }

    int Euclidean_Algorithm_Approach(int a, int b)
    {
        while(a!=b)
        {
            if(a>b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        return a;
    }

    int Optimised_Euclidean_Algorithm_Approach(int a, int b)
    {
        if (b==0)
        {
            return a;
        }
        else{
            return Optimised_Euclidean_Algorithm_Approach(b, a%b);
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter Number 1 For Naive Approach: ";
    cin >> a;
    cout << "Enter Number 2 For Naive Approach: ";
    cin >> b;
    cout << "Naive Approach: " << Solution().Naive_Approach(a, b) << endl;

    cout << "\nEnter Number 1 For Euclidean Algorithm Approach: ";
    cin >> a;
    cout << "Enter Number 2 For Euclidean Algorithm Approach: ";
    cin >> b;
    cout << "Euclidean Algorithm Approach: " << Solution().Euclidean_Algorithm_Approach(a, b) << endl;

    cout << "\nEnter Number 1 For Optimised Euclidean Algorithm Approach: ";
    cin >> a;
    cout << "Enter Number 2 For Optimised Euclidean Algorithm Approach: ";
    cin >> b;
    cout << "Euclidean Algorithm Approach: " << Solution().Optimised_Euclidean_Algorithm_Approach(a, b) << endl;
    return 0;
}

// Calculates HCF (Highest Common Factor) Or GCD (Greatest Common Divisor) Using 3 Approaches: Naive, Euclidean Algorithm Based And Optimised Euclidean Algorithm Based