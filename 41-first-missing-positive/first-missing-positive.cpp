class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        int pos_num = 1;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for(int i = 0; i <= nums.size(); i++) {
            if(!st.contains(pos_num)){
                ans = pos_num;
                break;
            }
            pos_num++;
        }
        return ans;
    }
};