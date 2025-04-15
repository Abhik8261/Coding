/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()

{
    int n=5;
    
   for(int i=1;i<=2*n-1;i++){
int stars=i;
if(i>n)
stars=2*n-i;
      for(int j=0;j<=stars;j++)
      cout<<"*";
    
    
      
        cout<<endl;
         
   }
  
    return 0;
}