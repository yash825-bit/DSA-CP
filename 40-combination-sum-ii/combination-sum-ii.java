class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> ans = new ArrayList<>();

        solve(ans, new ArrayList<>(), candidates, target, 0, 0);

        return ans;
    }
    private void solve(List<List<Integer>> ans, List<Integer> comb, int[] candidates, int target, int sum, int index) {

        if(sum == target) {
            ans.add(new ArrayList<>(comb));
            return;
        }

        if(index > candidates.length-1 || sum > target) {
            return;
        }

        comb.add(candidates[index]);

        solve(ans, comb, candidates, target, sum + candidates[index], index+1);

        comb.remove(comb.size()-1);

        int next = index + 1;

        while(next < candidates.length && candidates[next] == candidates[index]) {
            next++;
        }

        solve(ans, comb, candidates, target, sum, next);

    }
}