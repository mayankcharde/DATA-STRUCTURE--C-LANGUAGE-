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

//CASE 1 
struct node * insertionatfirst(struct node *head , int data){
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data =data;
    p->next = head;

    return p;
}

// CASE  2
struct node * insertionatindex(struct node *head ,int data ,int index){
    struct node *ptr =(struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p=head;
    int i =0;

    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next = ptr;
    return head;
}
// CASE 3 
struct node * insertionatend(struct node *head ,int data){
    struct node *ptr =(struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p =head;

    while(p->next! =NULL){
        p =p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//CASE 4 
struct node * insertafternode(struct node *head ,struct node*prevnode , int data){
    struct node *ptr =(struct node*) malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode ->next = ptr;
    return head;
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
 
// Terminate the list at the third node/
fourth->data = 66;
fourth->next = NULL;

linkedlisttraversal(head);

head = insertionatfirst(head , 50);
head = insertionatindex(head , third ,69);
head = insertionatend(head , 87);
return 0;
}
