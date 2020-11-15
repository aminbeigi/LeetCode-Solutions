# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# iterative solution
# Time complexity: O(n)
# Space complexity: O(1)
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if (head == None):
            return None
        
        current = head
        prev = None
        while (current != None):
            temp = current.next
            current.next = prev
            prev = current
            current = temp
        return prev