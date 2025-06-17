class Solution {
public:

    bool isValid(string str) {
        stack <int>s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='(' || str[i]=='[' || str[i]=='{')
            s.push(str[i]);
            else{
                if(s.empty())
                return false;
                char ch=s.top();
                s.pop();
                if((str[i]==')'&& ch=='(') || (str[i]=='}' && ch=='{') || (str[i]==']' && ch=='[') )
                continue;
                else
                return false;

            }
           
        }
         return s.empty();
        
    }
   
    
};