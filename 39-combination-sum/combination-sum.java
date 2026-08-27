class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list  = new ArrayList<>();

        solve(ans, list, 0, target, 0, candidates);

        return ans;
    }
    private void solve(List<List<Integer>> ans, List<Integer> list, int sum, int target, int index, int[] cand) {

        if(sum == target){
            ans.add(new ArrayList<>(list));
            return;
        }

        if(sum > target || index == cand.length){
            return;
        }
        

        list.add(cand[index]);
        
        solve(ans, list, sum+cand[index], target, index, cand);

        list.remove(list.size()-1);

        solve(ans, list, sum, target, index+1, cand);

    }
}