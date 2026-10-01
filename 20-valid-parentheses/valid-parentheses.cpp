class Solution {
public:
    bool isValid(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')ans+=s[i];
            else
            {
                if(ans.empty())return false;
                if((ans.back() == '(' && s[i] == ')') || (ans.back() == '[' && s[i] == ']') || (ans.back() == '{' && s[i] == '}'))ans.pop_back();
                else
                {
                    return false;
                }
            }
        }
        return ans.empty();
    }
};