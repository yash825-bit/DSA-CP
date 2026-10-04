class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        
        res = []

        def solve(O, C, s):
            if O == C and O+C == 2*n:
                res.append(s)
                return
            
            if O < n:
                solve(O+1, C, s+"(")
            
            if C < O:
                solve(O, C+1, s+")")
            
        solve(0, 0, "")

        return res