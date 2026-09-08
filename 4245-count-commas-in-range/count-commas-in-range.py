class Solution:
    def countCommas(self, n: int) -> int:
        ans = 0
        power = 1000
        commas = 1

        while power <= n:
            ans = (n-power+1)*commas
            power *= 1000
            commas += 1
        
        return ans