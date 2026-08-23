class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProd  = nums[0];
        int maxProd = nums[0];

        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int newMin = min({nums[i], maxProd*nums[i], minProd*nums[i]});
            int newMax = max({nums[i], maxProd*nums[i], minProd*nums[i]});

            maxProd = newMax;
            minProd = newMin;

            ans = max(ans, maxProd);
        }
        return ans;
    }
};