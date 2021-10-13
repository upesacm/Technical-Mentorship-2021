#include <stdio.h>
#include <stdlib.h>

struct Node                                     //structure for node
{
    int data;
    struct Node *next;
};

void display_list(struct Node *ptr)    //function to display the linked list
{
    while (ptr != NULL)                        
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    

    // Allocate memory for nodes in the linked list 
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    

    
    head->data = 21;
    head->next = second;

    
    second->data = 10;
    second->next = third;

    
    third->data = 2001;
    third->next = NULL;

    
    printf("Elements in the Linked List are as follows:\n");
    display_list(head);  //function call to display the list

    return 0;
}