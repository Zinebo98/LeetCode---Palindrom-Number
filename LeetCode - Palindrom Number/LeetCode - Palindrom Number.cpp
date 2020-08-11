#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s{ to_string(x) };
        string s2{ s };
        int len = s.length();
        for (size_t i{ 0 }; i < len / 2; ++i) {
            swap(s[i], s[len - i - 1]);
        }
        if (s == s2)return true;
        else return false;
    }
};