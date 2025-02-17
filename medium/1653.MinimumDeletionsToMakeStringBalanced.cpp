class Solution {
public:
    int minimumDeletions(string s) {
        int kqua = 0;
        stack<char> st;
        for (int i = 0; i <= s.length(); i++) {
            if (!st.empty() && (st.top() == 'b' && s[i] == 'a')) {
                st.pop();
                kqua++;
            } else {
                st.push(s[i]);
              
            }
        }

        return kqua;
    }
};