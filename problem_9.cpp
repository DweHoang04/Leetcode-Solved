/*
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long original = x;
        long reversed = 0;
        
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        if (reversed == original) return true;
        else return false;
    }
};
*/