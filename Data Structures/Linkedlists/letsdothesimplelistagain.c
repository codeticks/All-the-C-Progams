#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node* next;
};

void printL(struct node* ptr){ //get address of a node pointer, here Head, 
    while(ptr != NULL){ // run until ptr != NULL;
        printf("Element data :: %d\n", ptr -> data); //printing whats inside (*ptr).data inside (*head).data,
        ptr = ptr -> next;
        //here ptr = (*head).next = second;  here the ptr will now contain the address of the second node.
    }
}

int main(){
    struct node* head = (struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*) malloc(sizeof(struct node));
    struct node* third = (struct node*) malloc(sizeof(struct node));

    printf("Enter Data :: ");//I have just added the ability to take input while run time.
    scanf("%d", &head -> data);
    head -> next = second;

    printf("Enter Data :: ");
    scanf("%d",&second -> data);
    second -> next = third;

    printf("Enter Data :: ");
    scanf("%d",&third -> data);
    third -> next = NULL;

    printL(head);

    return 0;
//This will only work for the predefined no of nodes if the no of nodes aren't predefined then it won't work at all.
    
}