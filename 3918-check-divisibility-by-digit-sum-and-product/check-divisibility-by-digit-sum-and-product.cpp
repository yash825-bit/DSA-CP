class Solution {
public:
    bool checkDivisibility(int n) {
        int total = digit_sum(n) + digit_product(n);

        if(n % total == 0) {
            return true;
        }
        return false;
    }
private:
    static int digit_sum(int n) {
        int sum = 0;

        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    static int digit_product(int n) {
        int product = 1;

        while(n > 0) {
            product *= n % 10;
            n /= 10;
        }

        return product;
    }
};