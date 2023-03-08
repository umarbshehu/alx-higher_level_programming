#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer to the head of the list
 * @number: number to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current, *prev;

    /* create a new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = number;
    new_node->next = NULL;

    /* if the list is empty or the new node is the new head */
    if (*head == NULL || number < (*head)->n) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* insert the new node in the middle or the end of the list */
    prev = NULL;
    current = *head;
    while (current != NULL && current->n < number) {
        prev = current;
        current = current->next;
    }
    new_node->next = current;
    prev->next = new_node;

    return (new_node);
}
