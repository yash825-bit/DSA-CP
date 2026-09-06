class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nmap = {}

        for i in range(len(nums)):
            compliment = target - nums[i]
            if compliment in nmap:
                return [nmap[compliment], i]
            nmap[nums[i]] = i