/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */
var combine = function(n, k) {
    let result = [];
    let arr = [];

    solve(result, arr, 1, n, k);

    return result;
};

function solve(result, arr, i, n, k) {
    
    if(arr.length === k) {
        result.push([...arr]);
        return;
    }

    if(i > n){
        return;
    }
    
    arr.push(i);
    solve(result, arr, i+1, n, k);
    arr.pop();

    solve(result, arr, i+1, n, k);
};