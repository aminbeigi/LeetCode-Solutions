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
    public ListNode detectCycle(ListNode head) {
        if (head == null) {
            return null;
        }

        ListNode fast = head;
        ListNode slow = head;

        // Floyd's cycle detection algorithm
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            // slow and fast meeting up
            if (fast == slow) {
                slow = head;
                while (fast != slow) {
                    slow = slow.next;
                    fast = fast.next;
                }
                return fast;
            }
        }
        return null;
    }


    public ListNode detectCycle2(ListNode head) {
        ListNode current = head;
        IdentityHashMap<ListNode, Boolean> nodesSeen = new IdentityHashMap<>();

        while (current != null) {
            if (nodesSeen.containsKey(current)) {
                return current;
            }
            nodesSeen.put(current, true);
            current = current.next;
        }
        return null;
    }
}
 