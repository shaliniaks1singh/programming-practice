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

    temp = head;
    int val,a=0;
    cout<<"enter the value to find: ";
    cin>>val;
     for(int i = 0 ; i<n ; i++ ){
        while(temp->data == val ){
            a=1;
            temp = temp->next; 
        }
     }

     if(a=1){
        cout<<"found";
     }
     else{
        cout<<"not found";
     }
    //  temp = head;
    // while(temp != NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
     return 0;
}