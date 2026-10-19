func targetIndices(nums []int, target int) []int {

    sort.Ints(nums)
    
    var ans[] int

    for index, value := range nums {
        if value == target {
            ans = append(ans, index)
        }
    }

    return ans
}