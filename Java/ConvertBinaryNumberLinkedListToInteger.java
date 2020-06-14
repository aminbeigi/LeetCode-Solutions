/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode (int val) {
 *         this.val = val;
 *     }
 * }
 */
class ConvertBinaryNumberLinkedListToInteger {
    // time complexity: O(n)
    // space complexity: O(1)
    public int getDecimalValue(ListNode head) {
        ListNode current = head;
        int count = 0;
        int decOutput = 0;

        while (current != null) {
            current = current.next;
            ++count;
        }

        // reset value of current node
        current = head;
        while (count > 0) {
            decOutput = decOutput + (current.val * (int)(Math.pow(2, count-1)));
            current = current.next;
            --count;
        }
        return decOutput;
    }
}
    
