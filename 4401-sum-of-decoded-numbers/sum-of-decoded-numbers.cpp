class Solution {
public:
    const long long MOD = 1000000007;
    
    int sumDecoded(vector<long long>& nums) {

        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum = (sum + solve(nums[i]))%MOD;
        }
        return sum;
    }
    long long solve(long long num) {
        int width = num%10;
        long long d = num/10;

        int digits = to_string(num).size();
        long long p = 1;
        
        for(int i = 0; i < digits-1-width; i++) {
            p *= 10;
        }

        long long x = d / p;
        long long y = d % p;
        
        return modPow(x, y);
    }
    long long modPow(long long x, long long y) {
        
        long long result = 1;
        
        while(y > 0) {
            if(y % 2 == 1) {
                result = (result * x) % MOD;
            }
            x = (x * x) % MOD;
            y /= 2;
        }
        return result;
    }
};