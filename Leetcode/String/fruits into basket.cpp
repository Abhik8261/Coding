class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxlen=0,k=2;
        if (fruits.empty()) return 0;
        unordered_map<int,int>mapp;
        while(r<fruits.size()){
            mapp[fruits[r]]++;

            if(mapp.size()>k  ){ 
            mapp[fruits[l]]--;
            if(mapp[fruits[l]]==0)
           {
            mapp.erase(fruits[l]);
                  
           }
             l++;
            }

               
                
             if(mapp.size()<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
        }
       
        return maxlen;

    }
};