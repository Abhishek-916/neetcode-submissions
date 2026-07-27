class MinStack {
public:stack<pair<int,int>>st;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            auto i=st.top();
            int m=i.second;
            st.push({val,min(val,m)});
        }
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        auto j = st.top();
        return j.first;
        
    }
    
    int getMin() {
        auto j = st.top();
        return j.second;
        
    }
};
