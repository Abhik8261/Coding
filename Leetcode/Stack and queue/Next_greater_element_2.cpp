class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nge(nums.size());
        int n=nums.size();
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&& st.top()<=nums[i%n])
            st.pop();
             if(i<n){
            if(!st.empty()){
                nge[i]=st.top();
            }
            else
            nge[i]=-1;
        }
        st.push(nums[i%n]);
        }
       
       return nge;

    }
};