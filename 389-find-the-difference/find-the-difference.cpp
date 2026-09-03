class Solution {
public:
    char findTheDifference(string s, string t) {
        int Tsum = 0;
        int Ssum = 0;

        for(int i = 0; i < s.size(); i++) {
            Ssum += s[i]-'a';
        }

        for(int j = 0; j < t.size(); j++) {
            Tsum += t[j]-'a';
        }

        return (char)(Tsum - Ssum + 'a');
    }
};