class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        ans.reserve(1430);
        string par;
        gvp(n, par, ans, 0, 0);
        return ans;
    }
    void gvp(int n, string &par, vector<string> &ans, int oc, int cc)
    {
        if(oc == n && cc == n)
        {
            ans.push_back(par);
            return;
        }
        if(oc != n)
        {
            par.push_back('(');
            gvp(n, par, ans, oc+1, cc);
            par.pop_back();
        }
        if(cc < oc)
        {
            par.push_back(')');
            gvp(n, par, ans, oc, cc+1);
            par.pop_back();
        }
    }
};