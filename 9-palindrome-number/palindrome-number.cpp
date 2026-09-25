class Solution {
public:
    bool isPalindrome(int x) {
        int originalNum = x;
        long revNum = 0;
        while(x>0){
            int ld = x%10;
            revNum = revNum*10 + ld;
            x = x/10; 
        }
        if(revNum == originalNum){
            return true;
        }
        return false;
    }
};