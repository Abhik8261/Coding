class StockSpanner {
public:
stack<pair<int,int>>st;
int index=-1,ans=0;
    StockSpanner() {
        index=-1;
        while (!st.empty())
         st.pop();
    }
    
    int next(int price) {
        index=index+1;
        while(!st.empty() && st.top().first<=price){
            st.pop();
            
        }
        ans=st.empty() ? index + 1 : index - st.top().second;
        st.push({price,index});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */