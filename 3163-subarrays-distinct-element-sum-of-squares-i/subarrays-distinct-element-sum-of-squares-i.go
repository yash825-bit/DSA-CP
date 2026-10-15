func sumCounts(nums []int) int {

    n := len(nums)
    sum := 0

    for i := 0; i < n; i++ {

        set := [101]bool{}
        count := 0
        square := 0

        for j := i; j < n; j++ {

            if !set[nums[j]] {
                set[nums[j]] = true
                count++
                square = count*count
            }
            sum += square
        }
    }
    return sum
}