
    void threeWayPartition(vector<int>& array,int a, int b)
    {
         int k=0,j=array.size()-1;
        for(int i=0;i<=j;i++){
            if(array[i]<a){
                int temp=array[i];
                array[i]=array[k];
                array[k]=temp;
                k++;
            }
            else if(array[i]>b){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                j--;
                i--;
            }
        }
    }
       
