#include "monty.h"
/**
 * f_pall - will print the stack
 * @head: head of stack
 * @counter: not necessarily used here
 * Return: will not return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
