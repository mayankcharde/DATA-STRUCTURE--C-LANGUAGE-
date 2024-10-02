# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr){
    while(ptr != NULL){
        printf("element: %d\n" ,ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


head =(struct node*) malloc(sizeof(struct node));
second =(struct node*) malloc(sizeof(struct node));
third =(struct node*) malloc(sizeof(struct node));
fourth =(struct node*) malloc(sizeof(struct node));

//LINK FIRST AND SECOND NODE 
head->data =7;
head->next = second;

//LINK SECOND AND THIRD NODE 
second->data =11;
second->next = third; 

//Link third and fourth nodes
third->data = 41;
third->next = fourth;
 
//Terminate the list at the third node
fourth->data = 66;
fourth->next = NULL;

linkedlisttraversal(head);
return 0;
}
