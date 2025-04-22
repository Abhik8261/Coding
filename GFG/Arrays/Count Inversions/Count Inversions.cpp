int inversionCount(vector<int> &arr) {
    // Your Code Here
    int c=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                c++;
                
            }
            
        }
    }
   
    return c;
}