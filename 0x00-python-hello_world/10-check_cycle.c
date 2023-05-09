#include "lists.h"

/**
 * check_cycle - function to check for a loop in a
 * linked list
 * @list: start item of the linked list to be checked
 * Return: 1 if a loop is found, and 0 otherwise
 */

int check_cycle(listint_t *list)
{
	listint_t *unoptimized, *check;

	if (!list)
	{
		return (0);
	}
	unoptimized = list;
	check = list->next;
	while (check && unoptimized && check->next)
	{
		if (unoptimized == check)
		{
			return (1);
		}
		unoptimized = unoptimized->next;
		check = check->next->next;
	}
	return (0);
}
