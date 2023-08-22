#include "monty.h"
/**
 * f_pint -will  print the top(first-element)
 * @head: head-of-stack
 * @counter: line num
 * Return: will not return
*/

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}