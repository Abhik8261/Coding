class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0,hash[26]={0};

        while(r<s.size()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            if((r-l+1)-maxfreq>k){
                hash[s[l]-'A']--;
               
               
                l=l+1;
            }
          
                maxlen=max(maxlen,r-l+1);
                r++;
           
            
        }
        return maxlen;
    }
};