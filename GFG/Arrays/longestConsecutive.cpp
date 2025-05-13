int longestConsecutive(vector<int>& arr) {
        // Your code here
        int c=0, l_s=INT_MIN;
        int maxi=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]-1==l_s){
                c++;
                l_s=arr[i];
            }
            
            else if(arr[i]!=l_s){
                c=1;
                l_s=arr[i];
            }
            maxi=max(maxi,c);
        
            
        }
        return maxi;
    }