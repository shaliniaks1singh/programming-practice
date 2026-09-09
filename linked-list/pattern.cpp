 # include <iostream>
using namespace std;
struct node{
    int data;                                           // define node
    struct node *next;
};

//  create node 
int main(){
    int length = 0;
    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    head->data=10;
    second->data=20;
    third->data=30;
    head->next=second;
    second->next=third;
    third->next=NULL;
    node *temp = head;
    while(temp != NULL){
     length++;
     cout << temp->data<<" ";
     temp=temp->next;
    }
    temp = head;
    cout<<length <<" ";
    for (int i = 0; i < length / 2; i++) 
{
    temp = temp->next;
}

cout << "middle = " << temp->data;
    return 0;
}