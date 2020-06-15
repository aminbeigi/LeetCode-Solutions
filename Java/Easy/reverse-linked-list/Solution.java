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
class Solution {
    // two pointer solution
    // time complexity: O(n)
    // space complexity: O(1)
    public ListNode reverseList(ListNode head) {
    ListNode prev = null;
    ListNode current = head;
    while (current != null) {
        ListNode nextTemp = current.next;
        current.next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}
    
    // HashMap solution
    // time complexity: O(n)
    // space complexity: O(n)
    public ListNode reverseList2(ListNode head) {
        ListNode current = head;
        int count = 0;
        HashMap<Integer, Integer> nodeMap = new HashMap<>();
        
        while (current != null) {
            nodeMap.put(count, current.val);
            current = current.next;                
            ++count;
        }
        // reset value of current 
        current = head;
        for (int i = 0; i < count; ++i) {
            current.val = nodeMap.get(count - i - 1);
            current = current.next; 
        }
        return head;
    }
}
 
