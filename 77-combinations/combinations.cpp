class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> list;
        vector<vector<int>> ans;

        solve(1, list, ans, n, k);
        return ans;
    }
    void solve(int i, vector<int> &list, vector<vector<int>> &ans, int n, int k)
    {
        if(list.size() == k)
        {
            ans.push_back(list);
            return;
        }

        for(int it = i; it <= n; it++)
        {
            list.push_back(it);

            solve(it+1, list, ans, n, k);

            list.pop_back();
        }
    }
};