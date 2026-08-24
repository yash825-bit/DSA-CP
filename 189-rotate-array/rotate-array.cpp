class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse_array(nums, 0, nums.size()-1);
        reverse_array(nums, 0, k-1);
        reverse_array(nums, k, nums.size()-1);
    }
    void reverse_array(vector<int>& arr, int fp, int sp) {
        while(fp < sp) {
            int temp = arr[sp];
            arr[sp] = arr[fp];
            arr[fp] = temp;
            fp++;
            sp--;
        }
    }
};