class MinStack {
stack<int> st;
stack<int> min;
public:


    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min.empty() || val<=min.top()){
            min.push(val);
        }
        else{
            min.push(min.top());
        }
        
    }
    
    void pop() {
        if(min.empty()){
            return;
        }
        st.pop();
        min.pop();
        
    }
    
    int top() {
        if(min.empty()){
            return -1;
        }
        return st.top();
        
    }
    
    int getMin() {
        if(min.empty()){
            return -1;
        }
        return min.top();
     
        
    }
};
