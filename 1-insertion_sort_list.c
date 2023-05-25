#include "sort.h"
/**
 * cambiar - change two nodes in a list.
 * @head: A pointer to the head of the doubly-linked list.
 * @nodo1: A pointer to the first node to change.
 * @nodo2: The second node to change.
 */
void cambiar(listint_t **head, listint_t **nodo1, listint_t *nodo2)
{
	(*nodo1)->next = nodo2->next;
	if (nodo2->next != NULL)
		nodo2->next->prev = *nodo1;
	nodo2->prev = (*nodo1)->prev;
	nodo2->next = *nodo1;
	if ((*nodo1)->prev != NULL)
		(*nodo1)->prev->next = nodo2;
	else
		*head = nodo2;
	(*nodo1)->prev = nodo2;
	*nodo1 = nodo2->prev;
}
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: A pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insertar, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		insertar = i->prev;
		while (insertar != NULL && i->n < insertar->n)
		{
			cambiar(list, &insertar, i);
			print_list((const listint_t *)*list);
		}
	}
}
