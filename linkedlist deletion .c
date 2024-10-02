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
struct node * deletefirst(struct node *head){
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

// CASE 2
struct node * deleteatindex(struct node * head , int index){
    struct node *p = head ;
    struct node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        p=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

//CASE 3 
struct node * deleteatlast(struct node * head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}

// ****************IT IS OPTIONAL**************
// CASE 4 
//struct Node * deleteAtIndex(struct Node * head, int value){
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while(q->data!=value && q->next!= NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     if(q->data == value){
//         p->next = q->next;
//         free(q);
//     }
//     return head;
// }
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

head = deletefirst(head);
head = deleteatlast(head);
return 0;
}
