#include <iostream>
using namespace std;

#define MAX 100                                  


int queue[MAX];
int front=-1;
int rear=-1;

//Enqueue
void enqueue(int value){
    //check overflow
    if(rear == MAX){
        cout<<"Queue is overflow"<<endl;
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear]=value;

    cout<<value<<"is inserted successfully"<<endl;
}

// dequeue
void dequeue(){
    if(front == -1 || front>rear){  // issue
        cout<<"queue underflow"<<endl;
        return;
    }
   cout<<queue[front]<<" deleted successfully "<<endl;
   front++;
}

// Display
void display(){
   // check empty
   if(front == -1 || front>rear){
    cout<<"queue is empty"<<endl;
    return;
   } 
   cout<<"Queue elemnts: ";
   for(int i = front;i<=rear;i++){
    cout<<queue[i]<<" ";
   }
   cout << endl;
}

//Peek
void peek(){
    if(front == -1 || front>rear){
        cout<<"stack underflow";
        return;
    }
    cout<<"front element: "<<queue[front]<<endl;
}

int main(){
    int n;
    int value;
    int choice;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0 ; i<n ;i++){
        cin>>value;
        enqueue(value);
    }
    do{
        cout<<"\n----Queue Menu----"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Peek"<<endl;
        cout<<"5. End"<<endl;
        cout<<"Enter the choice: ";
        cin>>choice;
        switch(choice)
        {
          case 1:
          cout<<"Enter value: ";
          cin>>value;
          enqueue(value);
          break;

          case 2: 
          dequeue();
          break;

          case 3:
          display();
          break;

          case 4:
          peek();
          break;

          case 5:
          cout<<"Program ended. "<<endl;
        } 
    }while(choice != 5);
        return 0;
}