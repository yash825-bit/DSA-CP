/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {

    if(n < 2){
        return n;
    }
    let first_num = 0;
    let second_num = 1;

    for(let i = 2; i <= n; i++) {
        let third_num = first_num + second_num;

        first_num = second_num;
        second_num = third_num;
    }
    return second_num;
};