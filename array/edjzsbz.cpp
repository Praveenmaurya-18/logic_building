#include<stdio.h>
#include<stdlib.h>
  
  struct node{
  	int data;
  	struct node *next;
  };
  struct node* reverse(struct node *head){
  	struct node *prev = NULL, *current = head, *nextnode = NULL;
  	while(current != NULL){
  		nextnode = current->next;
  		current->next = prev;
  		prev = current;
  		current = nextnode;
	  }
	  return prev;
  }


int main(){
	
	int n,i,value;
	struct node *head = NULL , *temp = NULL, *newnode =NULL;
	struct node *slow =NULL,*fast=NULL;
	struct node *secondhalf = NULL;
	
	printf("enter the number of nodes:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nenter data:");
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
	slow = head;
	fast = head;
	while(fast !=NULL && fast->next != NULL){
		slow = slow->next;
		fast= fast->next->next;
	}
	secondhalf = reverse(slow);
	temp = head;
	while(secondhalf != NULL){
		if(temp->data != secondhalf->data){
			printf("\nnot a palindrome");
			return 0;
		}
		temp = temp->next;
		secondhalf = secondhalf->next;
	}
	printf("\npalindrome linked list");
	return 0;
	
}
