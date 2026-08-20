impl Solution {
    pub fn result_array(mut nums: Vec<i32>) -> Vec<i32> {
        let mut i = 1;
        for j in 2..nums.len() {
            if nums[i-1] > nums[j-1] {
                nums[i..=j].rotate_right(1);
                i += 1;
            }
        }
        return nums;
    }
}