class Solution {
    public int minimumPushes(String word) {
        int n = word.length();
        int q = n>>3;
        int r = n&7;

        return (4*q+r)*(q+1);
    }
}