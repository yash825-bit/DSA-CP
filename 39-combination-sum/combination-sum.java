import java.util.*;

class Solution {

    public List<List<Integer>> combinationSum(int[] arr, int k) {

        return new AbstractList<List<Integer>>() {

            private List<List<Integer>> mList;

            @Override
            public int size() {
                init();
                return mList.size();
            }

            @Override
            public List<Integer> get(int i) {
                init();
                return mList.get(i);
            }

            private void init() {
                if (mList != null) return;

                mList = new ArrayList<>();

                counter(arr, 0, 0, k,
                        new ArrayList<Integer>(), mList);
            }
        };
    }

    private void counter(int[] arr, int i, int sum, int k,
                         List<Integer> list,
                         List<List<Integer>> result) {

        if (sum == k) {
            result.add(new ArrayList<>(list));
            return;
        }

        if (i == arr.length || sum > k) {
            return;
        }

        counter(arr, i + 1, sum, k, list, result);

        list.add(arr[i]);

        counter(arr, i, sum + arr[i], k, list, result);

        list.remove(list.size() - 1);
    }
}