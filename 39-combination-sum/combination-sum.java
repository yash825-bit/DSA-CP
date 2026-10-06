class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> comb = new ArrayList<>();


        solve(ans, comb, candidates, 0, target, 0);

        return ans;
    }
    private void solve(List<List<Integer>> ans, List<Integer> comb, int[] candidates, int sum, int target, int index){
        if(sum == target) {
            ans.add(new ArrayList<>(comb));
            return;
        }

        if(sum > target || index == candidates.length) {
            return;
        }
        comb.add(candidates[index]);

        solve(ans, comb, candidates, sum+candidates[index], target, index);

        comb.remove(comb.size()-1);

        solve(ans, comb, candidates, sum, target, index+1);
    }
}