class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        int ans = 0;
        int incr = 1;

        for(int i : nums) {
            st.insert(i);
        }

        for(int i = 0; i <= nums.size(); i++) {
            if(!st.contains(k*incr)){
                ans = k*incr;
                break;
            }
            incr++;
        }
        return ans;
    }
};