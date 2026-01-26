// palindrome of number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
            }

        long long rev=0;
        int orgi=x;
        while(x>0){
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;
            }
        return (orgi==rev);
    }
};



OR 

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i++] != s[j--]) return false;
        }
        return true;
    }
};
