class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        int mini = Integer.MAX_VALUE, maxi = Integer.MIN_VALUE, n = nums.length;
        List<Integer> ans = new ArrayList<>();
        HashSet<Integer> set = new HashSet<>();
        
        for(int i : nums){set.add(i);}

        for(int i = 0; i < n; i++) {
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            if(nums[i] < mini) {
                mini = nums[i];
            }
        }
        
        for(int i = mini+1; i < maxi; i++) {
            if(!set.contains(i)){
                ans.add(i);
            }
        }
        return ans;
    }
}