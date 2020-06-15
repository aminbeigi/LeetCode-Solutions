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
 public class Solution {
    // time complexity: O(n)
    // space complexity: O(1)
    public boolean hasCycle(ListNode head) {
        if (head == null){
            return false;
        }
        // Floyd's cycle detection algortihm
        ListNode fast = head;
        ListNode slow = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if (fast == slow) {
                return true;
            }
        }
        return false;
    }
}
 
