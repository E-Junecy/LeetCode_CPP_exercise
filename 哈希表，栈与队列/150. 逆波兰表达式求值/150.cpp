class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int tem1,tem2;
        for(auto& it:tokens){
            if (it == "+") {
                tem1 = st.top(); st.pop();
                tem2 = st.top(); st.pop();
                st.push(tem2 + tem1);
            } 
            else if (it == "-") {
                tem1 = st.top(); st.pop();
                tem2 = st.top(); st.pop();
                st.push(tem2 - tem1);
            } 
            else if (it == "*") {
                tem1 = st.top(); st.pop();
                tem2 = st.top(); st.pop();
                st.push(tem2 * tem1);
            } 
            else if (it == "/") {
                tem1 = st.top(); st.pop();
                tem2 = st.top(); st.pop();
                st.push(tem2 / tem1);
            } 
            else {
                st.push(stoi(it)); 
            }
        }
        return st.top();
    }
};