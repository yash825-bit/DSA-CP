class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        dp = [[-1]*len(t) for _ in range(len(s))]

        return self.solve(s, t, 0, 0, dp)
    
    def solve(self, s, t, i, j, dp):
        
        if j == len(t):
            return 1
        
        if i == len(s):
            return 0

        if dp[i][j] != -1:
            return dp[i][j]
        
        if s[i] == t[j]:
            take = self.solve(s, t, i+1, j+1, dp)
            not_take = self.solve(s, t, i+1, j, dp)

            dp[i][j] = take + not_take
        else :
            dp[i][j] = self.solve(s, t, i+1, j, dp)
    
        return dp[i][j]
            