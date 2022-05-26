//I found this code in the video of code with harry's data structure course video, but I learned it my self and then only wrote this.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr){

  while(ptr != NULL){
      printf("Element :: %d\n", ptr -> data);
      ptr = ptr -> next;
  }  
}

int main(){
    
    struct node* head = (struct node*) malloc(sizeof(struct node));;
    struct node* second = (struct node*) malloc(sizeof(struct node));;
    struct node* third = (struct node*) malloc(sizeof(struct node));;
    struct node* fourth = (struct node*) malloc(sizeof(struct node));;

    head -> data = 04;
    head -> next = second;

    second -> data = 23;
    second -> next = third;

    third -> data = 49;
    third -> next = fourth;

    fourth -> data = 39;
    fourth -> next = NULL;

    printf("\n%d\n", head);

    linkedListTraversal(head);

    
    return 0;
}