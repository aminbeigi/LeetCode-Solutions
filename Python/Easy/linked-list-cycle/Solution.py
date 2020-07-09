# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    # time complexity: O(n)
    # space complexity: O(1)
    def hasCycle(self, head: ListNode) -> bool:
        current = head
        if current == None:
            return 0
        fast = current
        slow = current
        
        # Floyd's cycle detection algorithm
        while fast != None and fast.next != None:
            fast = fast.next.next
            slow = slow.next
            if fast is slow:
                return 1            
        return 0
