class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int count = 0;

        for(int i = 0; i < arr1.length; i++) {

            if(isValid(arr1[i], arr2, d)) {
                count++;
            }
        }
        return count;
    }
    private boolean isValid(int num, int[] arr, int d) {

        for(int i = 0; i < arr.length; i++) {
            if(Math.abs(num - arr[i]) <= d){
                return false;
            }
        }

        return true;
    }
}