class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1,mid=0;
        while(mid<=r){
            if(arr[mid]==0){
                swap(arr[mid],arr[l]);
                l++;
                mid++;
            }
           
          else if(arr[mid]==1)
            mid++;
            else{
                 swap(arr[mid],arr[r]);
                 r--;
            }
           
        }
    }
};
