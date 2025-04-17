void sort012(vector<int>& a) {
    int one=0,two=0,n=a.size();
   for(int i=0;i<n;i++){
       if(a[i]==1)
       one++;
       if(a[i]==2)
       two++;
   }
   
   for(int i=n-1;i>=0;i--){
       if(two>0){
           a[i]=2;
           two--;
       }
       else{
           if(one>0){
               a[i]=1;
               one--;
           }
           else
           a[i]=0;
       }
   }
}