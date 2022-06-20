// 206. Reverse Linked List
// Easy

// 8712

// 153

// Add to List

// Share
// Given the head of a singly linked list, reverse the list, and return the reversed list.



// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Example 2:


// Input: head = [1,2]
// Output: [2,1]
// Example 3:

// Input: head = []
// Output: []


// Constraints:

// The number of nodes in the list is the range [0, 5000].
// -5000 <= Node.val <= 5000


// Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?

public class Solution
{
    public ListNode ReverseListMySolution(ListNode head)
    {
        ListNode temp = head;
        if (head == null)
        {
            return null;
        }
        ListNode tempNext = head.next;
        if (tempNext == null)
        {
            return head;
        }
        temp.next = null;
        while (tempNext != null)
        {
            ListNode ptr = tempNext.next;
            tempNext.next = temp;
            temp = tempNext;
            tempNext = ptr;
        }

        return temp;
    }

    public ListNode ReverseListIterativeApproach(ListNode head)
    {
        ListNode temp = null;
        ListNode tempNext = head;
        if (tempNext == null)
        {
            return null;
        }
        while (tempNext != null)
        {
            ListNode ptr = tempNext.next;
            tempNext.next = temp;
            temp = tempNext;
            tempNext = ptr;
        }

        return temp;
    }

    public ListNode ReverseListRecursiveApporach(ListNode head)
    {
        if (head == null || head.next == null)
        {
            return head;
        }
        ListNode p = ReverseListRecursiveApporach(head.next);
        head.next.next = head;
        head.next = null;
        return p;
    }
}