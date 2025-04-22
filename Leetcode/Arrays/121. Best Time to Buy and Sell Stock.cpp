int maxProfit(vector<int>& arr) {
    int index;
    int mini=arr[0];
    int n=arr.size();
    int maxi=0;
    if(n<=1)
    return 0;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);
            }

           
    
    
            
    return maxi;
}