/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()

{
 
    int n=6;
       int d=2*(n-1);
   for(int i=1;i<n;i++){
       
     for(int j=1;j<=i;j++){
         cout<<j;
     }
     
     for(int s=1;s<=d;s++){
         cout<<" ";
     }
     for(int r=i;r>=1;r--)
     cout<<r;
       cout<<endl;
       d=d-2;
   }
  
    return 0;
}