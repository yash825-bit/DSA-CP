func maxAlternatingSum(nums []int) int64 {
    sort.Slice(nums, func(i, j int) bool {
        return abs(nums[i]) < abs(nums[j])
    })
    var ans int64
    half := len(nums) / 2
    for i, n := range nums {
        sq := int64(n) * int64(n)
        if i < half {
            ans -= sq
        } else {
            ans += sq
        }
    }
    return ans
}
func abs(num int) int{
    if num > 0 {
        return num
    }
    return -num
}