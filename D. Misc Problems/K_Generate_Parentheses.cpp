// Given A Number `n, This Code Generates All Combinations Of Well-Formed `n` Parentheses

#include <iostream>
#include <vector>
#include <string>

class Solution
{
    public:
        std::vector<std::string> generateParentheses(int n)
        {
            std::vector<std::string> answerVector;
            generate("", n, n, answerVector);
            return answerVector;
        }
    
    private:
        void generate(std::string str, int left, int right, std::vector<std::string>& answerVector)
        {
            if(left==right && left==0)
            {
                answerVector.push_back(str);
                return;
            }

            if(left>0)
            {
                generate(str+"(", left-1, right, answerVector);
            }
            
            if(right>left)
            {
                generate(str+")", left, right-1, answerVector);
            }
        }       
};

int main()
{
    int n;
    std::cout<<"Enter Input Value For `n`: ";
    std::cin>>n;
    std::vector<std::string> answer = Solution().generateParentheses(n);
    std::cout<<"\nAnswer:"<<std::endl;
    for(std::string combination: answer)
    {
        std::cout<<combination<<std::endl;
    }
    std::cout<<"\nTotal Combinations: "<< answer.size();
    return 0;
}