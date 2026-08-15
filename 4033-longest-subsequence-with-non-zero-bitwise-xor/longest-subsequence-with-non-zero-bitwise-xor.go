func longestSubsequence(nums []int) int {
    xor := 0
    nonZero := false

    for _, num := range nums {
        xor ^= num

        if num != 0 {
            nonZero = true
        }
    }

    if xor != 0 {
        return len(nums)
    }

    if nonZero {
        return len(nums)-1
    }

    return 0
}