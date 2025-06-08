class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int sum ,  n=arr.size();
        set<vector<int>>v;
       
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
             int l=i+1,r=n-1;
             while(l<r){
                sum=arr[i]+arr[l]+arr[r];
                if(sum==0){
                 v.insert({arr[i],arr[l],arr[r]});
                l++;
                r--;
                }
               else if(sum<0)
               l++;
               else
               r--;
             }
             
        }
      
        return vector<vector<int>>(v.begin(), v.end());
    }
};