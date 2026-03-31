class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()%2!=0)return false;
        for(const auto& it:s){
            switch(it){
                case '(':
                    st.push(')');
                    break;
                case '[':
                    st.push(']');
                    break;
                case '{':
                    st.push('}');
                    break;
                case ')':
                case ']':
                case '}':
                    if(!st.empty()&&it==st.top()){
                        st.pop();
                        break;
                    }
                    return false;
            }
        }
        if(st.empty())return true;
        return false;
    }
};