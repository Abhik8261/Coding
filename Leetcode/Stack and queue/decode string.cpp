class Solution {
public:
    string decodeString(string s) {
        stack<int> sn;
        stack<string> st;
        int num=0;
        string curr="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))
            num=num*10+(s[i]-'0');
            else if(s[i]== '['){
                sn.push(num);
                st.push(curr);
                num=0;
                curr="";
            }
            else if(s[i]== ']'){
                string temp=curr;
                curr=st.top();
                st.pop();
                int times=sn.top();
                sn.pop();
                for(int i=0;i<times;i++)
                curr+=temp;
            }
            else
            curr+=s[i];

        }
        return curr;
    }
};