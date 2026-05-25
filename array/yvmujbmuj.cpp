#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
int main(){
	int n,i,value;
	struct node *head = NULL,*temp = NULL, *newnode = NULL;
	struct node *prev = NULL,*current = NULL, *nextnode = NULL;
	
	printf("enter the number of node:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter data:");
		scanf("%d",&value);
		
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->next = NULL;
		
		if(head == NULL){
			head = newnode;
			
		}else{
			temp = head;
			while(temp->next != NULL){
				temp = temp->next;
				
			}
			temp->next=newnode;
		}
	}
	printf("original linked list:");
	temp = head;
	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
	
	current = head;
	while(current != NULL){
		nextnode = current->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}
		head = prev;
		
		
	
	printf("\nreversed linked list is:");
	temp = head;
	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
	
	
	
	return 0;
}
