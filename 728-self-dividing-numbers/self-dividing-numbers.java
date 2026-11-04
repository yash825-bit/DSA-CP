class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans = new ArrayList<>();

        for(int i = left; i <= right; i++) {
            if(check(i)){
                ans.add(i);
            }
        }

        return ans;
    }
    private boolean check(int num) {
        int org = num;
        while(num > 0) {
            int ld = num % 10;

            if(ld == 0 || org % ld != 0) {
                return false;
            }

            num = num / 10;
        }
        return true;
    }
}