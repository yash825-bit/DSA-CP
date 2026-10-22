func minOperations(nums []int) int {
    n := len(nums)
    maxdiff := n - 1
    first := nums[0]

    for i := 1; i < n; i++ {
        d := nums[i] - nums[i-1]
        if d < 0 {
            d = -d
        }
        if d != 1 && d != maxdiff {
            return -1
        }
    }

    if n == 1 || (first == 0 && nums[1] == 1) {
        return 0
    }

    a, b := n-first, first+2
    if a < b {
        return a
    }
    return b
}