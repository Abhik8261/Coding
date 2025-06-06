class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int maxlen=0,l=0,r=0,len=0;
        int zero=0;
        while(r<arr.size()){
            if(arr[r]==0)
            zero++;
            while(zero>k){
                if(arr[l]==0)
                 zero--;
                l++;
            }
            if(zero<=k){
                len=r-l+1;
                maxlen=max(len,maxlen);

            }
            r++;
        }
        return maxlen;
    }
};