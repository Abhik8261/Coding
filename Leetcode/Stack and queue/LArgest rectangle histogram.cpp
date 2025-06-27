class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int> st;
        int elem;
        int maxarea=INT_MIN;
        int nse,pse;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                elem=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                maxarea=max(maxarea,arr[elem]*(nse-pse-1));

            }
            st.push(i);
        }
        while(!st.empty()){
            nse=n;
            elem=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();

            maxarea=max(maxarea,arr[elem]*(nse-pse-1));
        }
        return maxarea;
    }
};