class Solution {
public:
    bool palindrome(string &s, int i){
        int n=s.size();
        if(i>=n/2){
            return true;
        }
        if(s[i]!=s[n-i-1])
        return false;
         return palindrome(s,i+1);
    }
    bool isPalindrome(string s) {
         string clean = "";
        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }
        return palindrome(clean,0);
        
    }
};