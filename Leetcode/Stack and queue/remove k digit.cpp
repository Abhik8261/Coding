class Solution {
public:
    string removeKdigits(string num, int k) {
       

    string res;
        
        for (char digit : num) {
            while (!res.empty() && k > 0 && res.back() > digit) {
                res.pop_back();
                k--;
            }
            res.push_back(digit);
        }

        
        while (k-- > 0 && !res.empty()) {
            res.pop_back();
        }

      
        int i = 0;
        while (i < res.size() && res[i] == '0') i++;

        res = res.substr(i);

        return res.empty() ? "0" : res;
    }
};

//  stack<char>st;
//         for(int i=0;i<num.size();i++){
//             while(!st.empty() && k>0 && (st.top()-'0')>(num[i]-'0')){
//                 st.pop();
//                 k=k-1;
//             }
//             st.push(num[i]);
//         }
//         while(k>0)
//         {st.pop();
//         k--;
//         }
//         if(st.empty())
//         return "0";

//         string res="";
//         while(!st.empty()){
//             res=res+st.top();
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
//         int i = 0;
//         while (i < res.size() && res[i] == '0') i++;
//         res = res.substr(i);

//         // return res.empty() ? "0" : res;