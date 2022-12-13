#include "monty.h"

stack_t *add_dnodeint_end(stack_t **head, const int n)
{
        stack_t *newnode, *tmp;

        newnode = malloc(sizeof(stack_t));
        if (newnode == NULL)
                return (NULL);

        newnode->n = n;
        newnode->next = NULL;

        if (*head == NULL)
                *head = newnode;
        else
        {
                tmp = *head;
                while (tmp->next != NULL)
                        tmp = tmp->next;
                tmp->next = NULL;
                tmp->prev = tmp;
        }
        return (newnode);
}
