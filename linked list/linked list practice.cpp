#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{

	int n, i, value, pos;
	struct node *temp = NULL, *head = NULL, *newnode, *prev;

	printf("enter the number of nodes:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("enter the data:");
		scanf("%d", &value);

		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->next = NULL;

		if (head == NULL)
		{
			head = newnode;

			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
	}
	printf("linked list:");
	temp = head;
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");

	printf("\ninsert at begining:");
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nenter the new data:");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode;
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("\ninsert at end:");
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nenter the data for insert at end:");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	temp = head;
	printf("\ncurrent linked list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("\ninsert at position:");
	printf("\nenter the position for insertion:");
	scanf("%d", &pos);
	printf("\nenter the data for insert at pos:");
	scanf("%d", &value);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = value;
	temp = head;
	for (i = 1; i < pos - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");

	printf("\ndeleting from begining:");
	temp = head;
	head = head->next;
	free(temp);
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");

	printf("\ndeleting from the end:");
	temp = head;
	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	free(temp);
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");

	printf("\ndeleting from position:");
	printf("\nenter the position for deletition:");
	scanf("%d", &pos);
	temp = head;
	for (i = 1; i < pos - 1 && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("\ndeleting by value:");
	printf("\nenter the value for deletation:");
	scanf("%d", &value);
	temp = head;
	while (temp != NULL && temp->data != value)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		prev->next = temp->next;
		free(temp);
	}
	temp = head;
	printf("\ncurrent list:");
	while (temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	return 0;
}
