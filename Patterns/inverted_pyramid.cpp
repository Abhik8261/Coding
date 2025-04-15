#include <iostream>
using namespace std;

int main()

{
    int n=9;
   for(int i=0;i<5;i++){
      for(int s=0;s<i;s++)
      {
          cout<<"  ";
      }
      for(int j=i;j<5;j++)
      cout<<"* ";
    
       for(int r=5;r<n;r++)
       cout<<"* ";
      
        cout<<endl;
         n--;
   }
  
    return 0;
}