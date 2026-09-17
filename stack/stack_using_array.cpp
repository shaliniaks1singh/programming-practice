#include<iostream>
#include<stack>
using namespace std;
// int stack[5];              // already known
int *st;                  // store address
int top = -1;
int n ;
void push(int value){
    if(top == n-1 ){
      cout<<"stack overflow "<<endl;
    }
    top++;
    st[top] = value; 
}

void pop(){
    if(top == -1){
        cout<<"stack underflow"<<endl;
        return;
    }

    cout<<" Deleted: "<<st[top]<<endl;
    top--;
}

void display(){
    if(top == -1){
        cout<<"stack underflow"<<endl;
    }
    for(int i=top; i>=0 ;i--){
    cout<< st[i]<<" ";
    }
    cout<< endl;
}

void peek()
{  if(top == -1){
    cout<<"stack underflow"<<endl;
    return;
}
    cout<<"Top Element: "<<st[top]<<endl;
}
 
void size(){
    cout<<"Size of stack: "<<top+1<<endl;
}

void Isempty(){
    if(top == -1){
        cout<<" stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}

void Isfull(){
    if(top == n-1){
        cout<<" stack is full "<<endl;
    }
    else{
        cout<<"stack is not full "<<endl;
    }
}

int main(){
    cout<<"Enter size of stack "<<endl;
    cin>>n;

    st = new int[n];          //[n] is array

    push(10);
    push(20);
    push(30);

    display();
    peek();
    size();
    Isempty();
    Isfull();
    pop();
    pop();
    display();
    delete[] st;
    
    return 0;

}