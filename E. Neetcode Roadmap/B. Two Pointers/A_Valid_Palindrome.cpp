#include <iostream>
#include <cctype> // For isalnum and tolower
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s = removeNonAlphaNumeric(s);
        string reverse = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            reverse += s[i];
        }
        return s == reverse;
    }

private:
    string removeNonAlphaNumeric(const string &s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        return result;
    }
};

int main() {
    return 0;
}
