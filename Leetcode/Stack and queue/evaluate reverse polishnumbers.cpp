class Solution {
public:
    int evalRPN(vector<string>& s) {
      stack<int>st;
      int ans=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=="+" || s[i]=="-" || s[i]=="*"|| s[i]=="/" && !st.empty()){
            int t1=st.top();
            st.pop();
            int t2=st.top();
            st.pop();
            if(s[i]=="+"){
                ans=t1+t2;

            }
            else if(s[i]=="-")
            ans=t2-t1;
            else if(s[i]=="*")
            ans=t1*t2;
            else
            ans=t2/t1;

            st.push(ans);
        }
        else{
            st.push(stoi(s[i]));
        }
      }
      return st.top();
    }
};