class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& arr) {
            vector<vector<int>>v;
            sort(arr.begin(),arr.end());
    
            for(auto x:arr){
                if(v.empty()||(v.back()[1]<x[0])){
                    v.push_back(x);
                
                }
                else{
                    v.back()[1]=max(v.back()[1],x[1]);
                }
            }
            return v;
        }
    };