int lengthOfLongestSubstring(string s) {
        int maxlen=0,l=0,r=0, n=s.size();
        unordered_map<char,int>mpp;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }