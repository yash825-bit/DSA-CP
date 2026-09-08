class Solution:
    def countCommas(self, n: int) -> int:
        count = 0

        org = n
        while n > 0:
            count += 1
            n //= 10
        
        if count < 4:
            return 0
        elif count == 4:
            return org-(10**(count-1))+1
        elif count == 5:
            return (10**(count-1))-(10**(count-2))+org-(10**(count-1))+1
        elif org == 100000:
            return 99001
        
            