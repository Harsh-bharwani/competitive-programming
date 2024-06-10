class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
{
    stack<int> st;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '+') {
            int temp1 = st.top(); st.pop();
            int temp2 = st.top(); st.pop();
            st.push(temp2 + temp1);
        }
        else if(S[i] == '-') {
            int temp1 = st.top(); st.pop();
            int temp2 = st.top(); st.pop();
            st.push(temp2 - temp1);
        }
        else if(S[i] == '*') {
            int temp1 = st.top(); st.pop();
            int temp2 = st.top(); st.pop();
            st.push(temp2 * temp1);
        }
        else if(S[i] == '/') {
            int temp1 = st.top(); st.pop();
            int temp2 = st.top(); st.pop();
            st.push(temp2 / temp1);
        }
        else {
            st.push(S[i] - '0');
        }
    }
    return st.top();
}
};
