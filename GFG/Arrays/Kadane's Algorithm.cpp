#include<iostream>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    // Your code here
    int max=-10000000,sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum>max)
        max=sum;
         if(sum<0 )
        sum=0;
    }
    return max;
}


