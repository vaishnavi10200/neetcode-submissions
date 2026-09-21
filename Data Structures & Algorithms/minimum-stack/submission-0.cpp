class MinStack {
public:
    vector<int> st; 
    vector<int> minst;
    MinStack() {  
    }
    
    void push(int val) {
        st.push_back(val);

        if(minst.empty()){
            minst.push_back(val);
        }
        else{
            minst.push_back(min(val,minst.back()));
        }
    }
    
    void pop() {
        st.pop_back();
        minst.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minst.back();
    }
};
