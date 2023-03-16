#include "lists.h"

/**
 * reverse - reverses the second half of the list
 *
 * @h_r: head of the second half
 * Return: no return
 */
void reverse(listint_t **h_r)
{
	listint_t *prv;
	listint_t *crr;
	listint_t *nxt;

	prv = NULL;
	crr = *h_r;

	while (crr != NULL)
	{
		nxt = crr->next;
		crr->next = prv;
		prv = crr;
		crr = nxt;
	}

	*h_r = prv;
}

/**
 * compare - compares each int of the list
 *
 * @h1: head of the first half
 * @h2: head of the second half
 * Return: 1 if are equals, 0 if not
 */
int compare(listint_t *h1, listint_t *h2)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = h1;
	tmp2 = h2;

	while (tmp1 != NULL && tmp2 != NULL)
	{
		if (tmp1->n == tmp2->n)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
		else
		{
			return (0);
		}
	}
	if (tmp1 == NULL && tmp2 == NULL)
	{
		return (1);
