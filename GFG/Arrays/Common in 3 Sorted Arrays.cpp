vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
    vector<int> &arr3) {
// Code Here
int i=0,j=0,k=0,prev=INT_MIN;
vector<int>arr;
while(i<arr1.size()&&j<arr2.size() && k<arr3.size()){
if(arr1[i]==arr2[j]  && arr3[k]==arr2[j]){
if(arr1[i]!=prev){
arr.push_back(arr1[i]);
prev=arr1[i];
}
i++,j++,k++;
}
else{
int min_val=min(arr1[i],arr2[j]);
min_val=min(arr3[k],min_val);
if(arr1[i]==min_val)
i++;
if(arr2[j]==min_val){
j++;
}
if(arr3[k]==min_val){
k++;
}
}
}
if(arr.empty())
return {-1};

return arr;

}