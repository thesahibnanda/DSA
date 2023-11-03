#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
    public:
        vector<int> sortByBits(vector<int> nums)
        {
            sort(nums.begin(), nums.end(), customCompare);
            return nums;
        }
    private:
        static bool customCompare(int a, int b)
        {
            int c1 = countSetBits(a);
            int c2 = countSetBits(b);
            if(c1!=c2)
            {
                return c2>c1;
            }
            else
            {
                return b>a;
            }
        }
        
        static int countSetBits(int num)
        {
            int count=0;
            while(num>0)
            {
                if((num&1)==1) // Make This `(num&1)==0` For Sorting On The Basis Of Unset Bits (0 Bits)
                {
                    count++;
                }
                num = num>>1;
            }
            return count;
        }
};

int main()
{
    vector<int> Vector;
    int n;

    cout << "Enter Element In Vector (Enter Non Integer To Break):\n";
    while (cin >> n) 
    {
        Vector.push_back(n);
    }
    
    Vector = Solution().sortByBits(Vector);
    cout<<"Sorted on The Basis of Set Bits (1 Bits): "<<endl;
    for(int num: Vector)
    {
        cout<< num<< ", ";
    }
}


