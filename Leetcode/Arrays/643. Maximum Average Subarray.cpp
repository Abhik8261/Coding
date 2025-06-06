class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double sum=0;
       double maxavg=-1e9;
        if(k>arr.size())
        return false;
       int l=0,r=0;
            while(r<arr.size()){
                 sum+=arr[r];
                    r++;
                if(r-l==k){
                    maxavg=max(maxavg,sum/k);
                    sum-=arr[l];
                    l++;
                }
                
               
            }
           
        

        return maxavg;

    }
};