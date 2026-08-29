class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int left = 0;
        int maxl = INT_MIN;
        if(s.size()==0)return 0;

        for(int right = 0; right < s.size(); right++)
        {
            while(st.count(s[right]))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxl = max(maxl, right - left + 1);
        }
        return maxl;
    }
};