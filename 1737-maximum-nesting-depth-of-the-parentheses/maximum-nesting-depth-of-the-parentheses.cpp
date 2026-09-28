class Solution {
public:
    int maxDepth(string s) {
        int maxCount = 0;
        int count = 0;
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push(s[i]);
                count++;
                maxCount = max(maxCount, count);
            }
            else if(s[i] == ')' && !st.empty()) {
                st.pop();
                count--;
            }
        }
        return maxCount;
    }
};