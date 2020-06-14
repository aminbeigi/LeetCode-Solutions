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
 class IntersectionOfTwoLinkedLists {
    // time complexity: O(n + m)
    // space complexity: O(1)
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int countA = 0;
        int countB = 0;
        ListNode currentA = headA;
        ListNode currentB = headB;

        while (currentA != null){
            currentA = currentA.next;
            ++countA;
        }
        while (currentB != null) {
            currentB = currentB.next;
            ++countB;
        }
        
        // resetting current to head
        currentA = headA;
        currentB = headB;

        int lengthDiff = countA - countB;

        // list A is larger
        while (lengthDiff > 0) {
            currentA = currentA.next;
            --lengthDiff;
        }
        // list B is larger
        while (lengthDiff < 0) {
            currentB = currentB.next;
            ++lengthDiff;
        }

        while (currentA != null) {
            if (currentA == currentB) {
                return currentA;
            }
            currentA = currentA.next;
            currentB = currentB.next;
        }
        return null;
    }
}
 
