class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        string s1=s;
        reverse(s.begin(),s.end());
       return s.compare(s1);
    }
};