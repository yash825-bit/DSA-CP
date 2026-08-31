/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let max_length = 0;

    for(let i = 0; i < s.length; i++) {

        const set = new Set();

        for(let j = i; j < s.length; j++) {

            if(set.has(s[j])){
                break;
            }
            set.add(s[j]);
        }
        max_length = Math.max(max_length, set.size);

    }

    return max_length;
};