bool hasTripletSum(vector<int> &arr, int X) {
        // Your Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        if(find2Numbers(i+1,n-1,X-arr[i],arr)){
            return true;
        }
    }
    
    return false; 
    }
    
    
    bool find2Numbers(int start,int end,int req,vector<int>A)
{
    while(start<end){
        
        if(A[start]+A[end]==req)
            return true;
        if(A[start]+A[end]>req)
            end--;
        if(A[start]+A[end]<req)
            start++;
    }
    
    return false;
}