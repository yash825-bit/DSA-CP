class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int power = 0;

        for(int i = columnTitle.size()-1; i >= 0; i--) {
            sum += (columnTitle[i]-'A'+1)*pow(26, power);
            power++;
        }
        return sum;
    }
};