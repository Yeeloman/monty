#include "monty.h"

/**
 *push - prints all the elements of a doubly linked list.
 *@head: head of the list
 *@lNum: line number
 */

void push(stack_t **head, unsigned int lNum)
{
	int int_val;

	if (infos.arg == NULL || *infos.arg == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	int_val = atoi(infos.arg);
	if (int_val == 0 && strcmp(infos.arg, "0") != 0)
	{
		fprintf(stderr, "L%d:  usage: push integer\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (infos.fifo == 0)
		add_node(head, int_val);
	else
		add_node_end(head, int_val);
}
