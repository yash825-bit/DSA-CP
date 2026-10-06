class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {

        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> comb = new ArrayList<>();

        solve(ans, comb, 1, 0, k, n);

        return ans;        
    }
    private void solve(List<List<Integer>> ans, List<Integer> comb, int number, int sum, int k, int n) {

        if(sum == n && comb.size() == k){
            ans.add(new ArrayList<>(comb));
            return;
        }

        if(sum > n || number > 9) {
            return;
        }

        comb.add(number);

        solve(ans, comb, number+1, sum+number, k, n);

        comb.remove(comb.size()-1);

        solve(ans, comb, number+1, sum, k, n);
    }
}