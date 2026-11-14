class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        solve(0, nums, new ArrayList<>(), ans);
        return ans;
    }
    public static void solve(int idx, int[] arr, ArrayList<Integer>list, List<List<Integer>>ans)
    {
        if(idx == arr.length)
        {
            ans.add(new ArrayList<>(list));
            return;
        }
        solve(idx+1, arr, list, ans);

        list.add(arr[idx]);
        solve(idx+1, arr, list, ans);

        list.remove(list.size()-1);
    }
}