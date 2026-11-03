class Solution {
    public int minMoves(int[] nums) {
        int total = 0;
        int largestNumber = Integer.MIN_VALUE;

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] > largestNumber) {
                largestNumber = nums[i];
            }
        }

        for(int i = 0; i < nums.length; i++) {
            total += largestNumber - nums[i];
        }

        return total;
    }
}