class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;
        for(auto x : tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(x == "+"){
                    ans = first + second;
                }
                else if(x == "-"){
                    ans = second - first;
                }
                else if(x == "*"){
                    ans = first * second;
                }
                else{
                    ans = second/first;
                }
                st.push(ans);
            }
            else{
                st.push(stoi(x));
            }
        }

        return st.top();

    }
};
