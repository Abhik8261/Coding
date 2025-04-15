#include <iostream>
using namespace std;

int main()

{
    int n=4;
    for(int i=0;i<5;i++){
        for(int s=0;s<n;s++){
            cout<<"  ";
        }
        n--;
        for(int j=0;j<=i-1;j++){
            cout<<"* ";
            
        }
        
        for(int j=0;j<=i;j++){
            cout<<"* "; 
        }
        cout<<endl;
    }
    int m=9;
   for(int i=0;i<5;i++){
      for(int s=0;s<i;s++)
      {
          cout<<"  ";
      }
      for(int j=i;j<5;j++)
      cout<<"* ";
    
       for(int r=5;r<m;r++)
       cout<<"* ";
      
        cout<<endl;
         m--;
   }
  
    return 0;
}