// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

// Example 1:

// Input: l1 = [1,2,4], l2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: l1 = [], l2 = []
// Output: []
// Example 3:

// Input: l1 = [], l2 = [0]
// Output: [0]

// Constraints:

// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both l1 and l2 are sorted in non-decreasing order.

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution
{
    public ListNode MergeTwoLists(ListNode l1, ListNode l2)
    {
        if (l1 == null)
        {
            return l2;
        }
        if (l2 == null)
        {
            return l1;
        }
        ListNode l3;
        if (l1.val < l2.val)
        {
            l3 = new ListNode(l1.val);
            l3.next = MergeTwoLists(l1.next, l2);
        }
        else
        {
            l3 = new ListNode(l2.val);
            l3.next = MergeTwoLists(l1, l2.next);
        }
        return l3;
    }
}