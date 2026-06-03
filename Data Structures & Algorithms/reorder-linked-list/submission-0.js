/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @return {void}
     */
    reorderList(head) {
        let curr = head;
        let arr = [];

        while (curr) {
            arr.push(curr);
            curr = curr.next;
        }

        let i = 0, j = arr.length - 1;

        while (i < j) {
            arr[i].next = arr[j];
            i++;

            if (i >=j ) break;

            arr[j].next = arr[i];
            j--;
        }

        arr[i].next = null;
    }
}
