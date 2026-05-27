#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node*next;
		
	};

	void linkedlisttraversal(struct node*ptr){
	
	while(ptr != NULL){
		printf("elements: %d\n",ptr->data);
	ptr = ptr->next;
	}

struct node * insertatfirst(struct node * head, int data );
struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->next = head;
ptr->data = data;
return ptr;
}
int main(){
	struct node*head;
	struct node*second;
	struct node * third;
	struct node * fourth;
	// allocate memory for nodes in the linked list in heap
	
	head = (struct node *) malloc (sizeof(struct node));
	second = (struct node *) malloc (sizeof(struct node));
	third = (struct node *) malloc (sizeof(struct node));
	fourth = (struct node *) malloc (sizeof(struct node));
	
	// linked first and second nodes
	head->data = 7;
	head->next = second;
	
	// linked second and third nodes
	second->data = 11;
	second->next = third;
	//linked third and fourth nodes
	third->data = 66;
	third->next = fourth;
	// terminate fourth
	fourth->data= 76;
	fourth->next = NULL;
	linkedlisttraversal(head);
	head = insertatfirst(head,56);
	linkedlisttraversal(head);
	
	
	return 0;
}
