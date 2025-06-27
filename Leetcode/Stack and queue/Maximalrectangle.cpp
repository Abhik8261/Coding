class Solution {
public:
 int largestRectangleArea(vector<int> &arr,int n) {
        stack<int> st;
        int elem;
        int maxarea=INT_MIN;
        int nse,pse;
        // int n=arr.size();
        for(int i=0;i<n;i++){
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

    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>psum(m,0);
        int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                psum[j] = (mat[i][j] == '1') ? psum[j] + 1 : 0;
            }
          
                maxarea=max(maxarea,largestRectangleArea(psum,m));
            
        }
         

            return maxarea;

        
    }
};