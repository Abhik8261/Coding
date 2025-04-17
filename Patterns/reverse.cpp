

#include <iostream>
using namespace std;

int main()

{
     
    int n=6;
    // char c='A';
     for(int i=n-1;i>=1;i--){
         
     for(char j='A';j<=i+'A';j++){
        
         cout<<j;
         
     }
     cout<<endl;
   }
  
    return 0;
}