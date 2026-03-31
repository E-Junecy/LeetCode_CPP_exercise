class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(const auto& it:s){
            if(st.empty())st.push(it);
            else if(it!=st.top())st.push(it);
            else st.pop();
        }
        string str;
        if(st.empty())return "";
        else{
            while(!st.empty()){
                str+=st.top();
                st.pop();
            }
            reverse(str.begin(),str.end());
            return str;
        }
    }
};