func sumCounts(nums []int) int {
    sum := 0

    for i := 0; i < len(nums); i++ {
        set := make(map[int]struct{})
        for j := i; j < len(nums); j++ {
            set[nums[j]] = struct{}{}
            count := len(set)
            sum += count*count
        }
    }
    return sum
}