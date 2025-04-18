class Solution {
    public:
      int minJumps(vector<int>& arr) {
          // code here
          int c=0,n=arr.size();
          if(n<=1)
          return 0;
           else if(arr[0]==0 )
              return -1;
              
          int mxreach=arr[0];
          int step=arr[0];
          int jump=1;
          for(int i=1;i<n;i++){
           if(i==n-1)
           return jump;
           mxreach=max(mxreach,i+arr[i]);
           step--;
           if(step==0){
               jump++;
               if(mxreach<=i)
               return -1;
               step=mxreach-i;
           }
           
           
              
              
          }
          return -1;
      }
  };