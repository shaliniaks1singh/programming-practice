#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main(){
    int n ;
    cout<<"enter the number of nodes: ";
    cin>>n;

    node *head = NULL ;
    node *temp = NULL ;
    cout<<"enter the data: ";
    for(int i = 0 ; i<n ; i++){

        node *newnode=(node*)malloc(sizeof(node));
        
        cin>>newnode->data;

        newnode->next=NULL;

        if(head==NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next=newnode ;   //connect
            temp = newnode;         //move
        }
    }
     node *prev = NULL;
     node *front = NULL;
     temp = head;
    while( temp != NULL){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
       head = prev;

     temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
     return 0;
}