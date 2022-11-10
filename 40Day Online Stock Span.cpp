class StockSpanner {
    stack<pair<int,int>>st; // declared a stack to strore the {index,price}
    int idx;
public:
    StockSpanner() {
         idx=-1; // initialize with -1
    }
    
    int next(int price) {
        idx+=1; // at first increment it with +1
        
        while(!st.empty() and st.top().second<=price){
            st.pop();
            }
            if(st.empty()){
                st.push({idx,price});
                return idx+1;
            }
        
        
            int result=st.top().first;
            st.push({idx,price});
            return idx-result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
