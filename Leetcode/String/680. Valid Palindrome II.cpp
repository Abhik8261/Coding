class Solution {
public:

bool ispalindrome(string s, int l, int r){
    while(l<r){
        if(s[r]!=s[l])
        return false;
        r--;
        l++;
    }
    return true;
    
}

    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[r]!=s[l])
            return ispalindrome(s,l+1,r) || ispalindrome(s,l,r-1);
            r--;
            l++;
        }
        return true;
        
    }
};