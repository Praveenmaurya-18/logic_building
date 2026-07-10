#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp, *prev;
    int i, pos, val, n;

    printf("Creating Initial List \n");
    printf("How many nodes to create initially? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
  
    temp = head; 
    printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n\n");

    printf("Inserting at Beginning\n");
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at the START: ");
    scanf("%d", &newnode->data);
    
    newnode->next = head;
    head = newnode;

    temp = head; printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
        
    }
    printf("NULL\n\n");
 
    printf("Inserting at End\n");
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at the END: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    temp = head;
    while(temp->next != NULL) 
    { 
        temp = temp->next;  
    }
    temp->next = newnode;

    temp = head; 
    printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; }
    printf("NULL\n\n");

    printf(" Inserting at Position\n");
    printf("Enter position to insert at: ");
    scanf("%d", &pos);
    printf("Enter data for this position: ");
    scanf("%d", &val);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    
    temp = head;
    for(i = 1; i < pos - 1 && temp != NULL; i++) 
    { 
        temp = temp->next;
        }
    
    newnode->next = temp->next;
    temp->next = newnode;

    temp = head; printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n\n");

    printf("Deleting from Beginning\n");
    temp = head;
    head = head->next;
    free(temp);

    temp = head; printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n\n");

    printf("Deleting from End\n");
    temp = head;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);

    temp = head; printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n\n");

    printf("Deleting from Position\n");
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    temp = head;
    for(i = 1; i < pos && temp != NULL; i++) 
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);

    temp = head; printf("Current List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n\n");

    printf("Deleting by Value\n");
    printf("Enter specific value to find and delete: ");
    scanf("%d", &val);
    
    temp = head;
    while(temp != NULL && temp->data != val) 
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL) 
    {
        prev->next = temp->next;
        free(temp);
    }

    temp = head; printf("Final Resulting List: ");
    while(temp != NULL) 
    { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    }
    printf("NULL\n");

    return 0;
}
