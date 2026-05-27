#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	
	int n,i,value;
	struct node *temp =NULL, *head = NULL, *newnode;
	
	printf("enter the number of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter data:");
		scanf("%d",&value);
		
		newnode=(struct node*)malloc(sizeof(struct node));
		
		newnode->data=value;
		newnode->next=NULL;
		if(head == NULL){
			head = newnode;
			temp = newnode;
		}else{
			temp->next=newnode;
			temp = newnode;
		}
	}
	printf("linked list:");
	temp = head;
	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
	
}
