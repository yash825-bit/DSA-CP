/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

var hasCycle = function(head) {
    let set = new Set();

    while(head) {
        if(set.has(head)){
            return true;
        }else {
            set.add(head);
            head = head.next;
        }
    }
    return false;
};