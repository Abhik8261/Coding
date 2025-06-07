class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       

        vector<int>res;
         if(s.size()<p.size())
        return res;
        vector<int>hashp(26,0),hashs(26,0);
        int l=0,r=0,plen=p.size();

        for(auto x:p)
        hashp[x-'a']++;

        while(r<s.size()){
            hashs[s[r]-'a']++;
            if(r-l+1>plen){
                hashs[s[l]-'a']--;
                l++;
            }
            if(r-l+1==plen){
                if(hashs==hashp){
                    res.push_back(l);
                }
               
            }
             r++;
        }
        return res;
    }
};