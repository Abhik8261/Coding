class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> st;
       unordered_map<int,int>nge;
       for(int i=nums2.size()-1;i>=0;i--){
        int curr=nums2[i];
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()){
            nge[curr]=-1;
        }
        else
        nge[curr]=st.top();
         st.push(curr);
       
       } 
       vector<int> res;
       for(auto c:nums1)
       res.push_back(nge[c]);



       return res;
      
    }
};