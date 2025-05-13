int maxProduct(vector<int> &arr) {
        // Your Code Here
        int maxi=INT_MIN;
        int pref=1,suff=1,n=arr.size();
        for(int i=0;i<n;i++){
            if(pref==0)
            pref=1;
            if(suff==0)
            suff=1;
            pref=pref*arr[i];
            suff=suff*arr[n-i-1];
            maxi=max(maxi, max(pref,suff));
        }
        return maxi;
    }
