#include <stdio.h>
#include <stdlib.h>
void createlinkedlist(int n);
void display();

struct node{
    int data;
    struct node *next;
}*head;

int main()
{
    int n;
    printf("Enter the number of nodes in linked list\n");
    scanf("%d", &n);
    createlinkedlist(n);
    display();
}

void createlinkedlist(int n){
    struct node *newnode, *currentnode;
    int value, i;
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to save in first node\n");
    scanf("%d", &value);
    head->data=value;
    head->next=NULL;
    currentnode=head;
    for(i=1;i<n;i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of node-%d\n", i+1);
        scanf("%d", &value);
        newnode->data=value;
        newnode->next=NULL;
        currentnode->next=newnode;
        currentnode=newnode;
    }
}
 
void display() { 
struct node *currentnode; 
currentnode=head; 
int a,c=0,d; 
printf("enter your choice you want search="); 
scanf("%d",&a); 
while(currentnode!=NULL) { 
        d=currentnode->data; 
if(d==a) { 
    c++; 
} 
currentnode=currentnode->next; 
} 
if(c!=0) { 
    printf("YES here it is\n"); 
} 
else { 
    printf("NO here it isnot there\n"); 
} 
 
}