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

class Solution
{
public:
    ListNode *reverseListMySolution(ListNode *head)
    {
        ListNode *temp = head;

        if (head == NULL)
        {
            return NULL;
        }
        ListNode *tempNext = head->next;
        if (tempNext == NULL)
        {
            return head;
        }
        temp->next = NULL;
        while (tempNext != NULL)
        {
            ListNode *ptr = tempNext->next;
            tempNext->next = temp;
            temp = tempNext;
            tempNext = ptr;
        }

        return temp;
    }
    ListNode *reverseListIterativeApproach(ListNode *head)
    {
        ListNode *temp = NULL;

        ListNode *tempNext = head;
        if (tempNext == NULL)
        {
            return NULL;
        }
        while (tempNext != NULL)
        {
            ListNode *ptr = tempNext->next;
            tempNext->next = temp;
            temp = tempNext;
            tempNext = ptr;
        }

        return temp;
    }
    ListNode *reverseListRecursiveApproach(ListNode *head)
    {
        ListNode *reverseList(ListNode * head)
        {
            if (head == NULL || head->next == NULL)
            {
                return head;
            }
            ListNode *p = reverseListRecursiveApproach(head->next);
            head->next->next = head;
            head->next = NULL;
            return p;
        }
    }
};