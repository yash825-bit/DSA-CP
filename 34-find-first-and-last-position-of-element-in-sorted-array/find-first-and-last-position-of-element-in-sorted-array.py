class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        
        def first_occurence():
            first, last = 0, len(nums)-1
            ans = -1

            while first <= last: 
                mid = (first+last)//2

                if nums[mid] == target:
                    ans = mid
                    last = mid-1
                elif nums[mid] < target:
                    first = mid+1
                else:
                    last = mid-1
            return ans
        
        def last_occurence():
            first, last = 0, len(nums)-1
            ans = -1

            while first <= last:
                mid = (first + last)//2

                if nums[mid] == target:
                    ans = mid
                    first = mid+1
                elif nums[mid] < target:
                    first = mid+1
                else:
                    last = mid-1
            return ans

        return [first_occurence(), last_occurence()]

