/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumDeletions = function(nums) {
    const n = nums.length;

    let minIndex = 0;
    let maxIndex = 0;

    for(let i = 1; i < n; i++) {
        if(nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }

        if(nums[i] < nums[minIndex]) {
            minIndex = i;
        }

    }
    let maxLeft = maxIndex+1;
    let minLeft = minIndex+1;

    let maxRight = n - maxIndex;
    let minRight = n - minIndex;

    const fromLeft = Math.max(maxLeft, minLeft);
    const fromRight = Math.max(maxRight, minRight);

    const fromBothSides = Math.min(maxLeft+minRight, minLeft+maxRight);

    return Math.min(fromLeft, fromRight, fromBothSides);
};