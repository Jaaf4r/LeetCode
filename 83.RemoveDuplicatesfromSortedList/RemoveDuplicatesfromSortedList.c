/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head)
{
	struct ListNode	*curr = head;

	while (curr)
	{
		while (curr->next && curr->next->val == curr->val)
		{
			curr->next = curr->next->next;
		}
		curr = curr->next;
	}
	return (head);
}
