/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode	*addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode	dummy;
	struct ListNode	*curr = &dummy;
	int				bag = 0;

	dummy.next = NULL;
	while (l1 || l2 || bag != 0)
	{
		int sum = bag;
		if (l1)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2)
		{
			sum += l2->val;
			l2 = l2->next;
		}

		bag = sum / 10;

		struct ListNode *l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
		if (!l3)
			return (NULL);

		l3->val = sum % 10;
		l3->next = NULL;

		curr->next = l3;
		curr = l3;
	}
	return (dummy.next);
}
