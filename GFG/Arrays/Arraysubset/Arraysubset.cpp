bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int starta = 0;
        int startb = 0;
        
        while(starta < a.size()){
            if(a[starta]==b[startb]){
                starta++;
                startb++;
            }
            else{
                starta++;
            }
            if(startb == b.size()){
                return true;
            }
        }
        
        return false;
        
        
    }