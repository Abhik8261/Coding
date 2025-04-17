int findUnion(vector<int>& a, vector<int>& b) {
    // code heren
    vector<int>res;
    int n=a.size();
    int m=b.size();
    for(int i=0;i<m;i++){
        a.push_back(b[i]);
        
    }
   
    sort(a.begin(),a.end());

   a.erase( unique(a.begin(),a.end()),a.end());
    
  
    return a.size();
}