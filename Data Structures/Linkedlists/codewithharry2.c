//insertion in a linked list.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traverse(struct node* startNode){
    while(startNode != NULL){
        printf("\nData : %d\n", startNode->data);
        startNode = startNode->next;
    }
}

struct node* insertFront(struct node* startingNode, int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = 1;// assigning values to the nodes;
    newNode->next = startingNode;

    return newNode; //returning the newly cooked node.
}

int main(){
    struct node* first = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    first->data = 3;
    second->data = 6;
    third->data = 9;

    first->next = second;
    second->next = third;
    third->next = NULL;

    traverse(first); 

    printf("\n :: Linked list after inserting new node :: \n");

    struct node* newNode = insertFront(first,1); //updating the first node pointer.

    traverse(newNode);
     // so now the first struct node* points to the newly cooked node newNode, and we will start printing from there only not after or before that note.

     


}