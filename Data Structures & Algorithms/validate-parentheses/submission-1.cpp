class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int u:s){
            if(u=='('|| u=='{' || u=='['){
                st.push(u);
            }
            else if(u==')' || u=='}'|| u==']'){
                if(st.empty())
                return false;
                char y=st.top();
            if ((u == ')' && y != '(') ||
                (u == '}' && y != '{') ||
                (u == ']' && y != '[')) {
                return false;
            }
            st.pop();
            }
        }
        return st.empty();
    }
};
