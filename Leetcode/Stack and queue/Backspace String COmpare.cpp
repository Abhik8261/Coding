class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st,stt;
       for(auto c:s){
        if(c=='#'){
            if(!st.empty()){
                st.pop();
            }
            continue;
        }
        else{
            st.push(c);
        }

       }
       for(int i=0;i<t.size();i++){
        if(t[i]=='#'){
            if(!stt.empty()){
                stt.pop();
            }
            continue;
        }
        else{
            stt.push(t[i]);
        }
       }
       if(stt==st)
       return true;
       else
       return false;
    }
};