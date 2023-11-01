class Solution {
public:
    bool isPalindrome(int x) {
        long o = x;
        long r = 0;
        while(x > 0) {
            r = r*10 + x%10;
            x = x/10;
        }
        return (o == r);
    }
};