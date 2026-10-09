func maxSubArray(nums []int) int {
    sum := 0
    maxi := math.MinInt

    for _, num := range nums{
        sum = max(num, sum+num)
        maxi = max(sum, maxi)
    }

    return maxi
}