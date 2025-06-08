class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>tmap,smap;
        for(auto x:t)
        tmap[x]++;
        int l=0,r=0,minlen=INT_MAX, index=0;
        int matchcnt=0,tn=t.size();
        while(r<s.size()){
            smap[s[r]]++;

            if(tmap.count(s[r]) && smap[s[r]]==tmap[s[r]])
            matchcnt++;

            while(matchcnt==tmap.size()){
                if(r-l+1<minlen){
                minlen=r-l+1;
                index=l;
                }
            smap[s[l]]--;
            if(tmap.count(s[l]) && smap[s[l]]<tmap[s[l]]){
                matchcnt--;
            }
            l++;
            } 
            r++;
        }
        return minlen==INT_MAX ?"":s.substr(index,minlen);
    }
};