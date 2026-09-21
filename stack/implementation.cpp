#include<iostream>
using namespace std;
//implement using array
class stack{
public:
int top;
int size;
int *arr;

stack(int s){
    size = s;
    top = -1;
    arr = new int[s];
}
void push(int value){
   if(top == size-1){
    cout<<"stack overflow"<<endl;
    return;
   }
   else{
    top++;
   arr[top] = value;
   cout<<"pushed"<< value <<"into the stack"<<endl;
}
}

void pop(){
    if(top == -1){
        cout<<"stack underflow"<<endl;
        return;
    }
    else{
        top--;
        cout<<"popped"<< arr[top+1] <<"from the stack"<<endl;
    }
}

int peek(){
  if(top == -1){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
        return arr[top];
    }   
}

bool Isempty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int Issize(){
    return top+1 ;
}
};

int main(){
    
stack s(5);
s.push(5);
s.push(6);
s.push(9);
s.pop();
s.pop();
s.push(4);
s.Issize();
s.peek();
s.Isempty();




    // stack<int> s;
    // s.push(9);
    // s.push(4);
    // s.pop();
    // cout<<"Top element is: "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }
     
    // cout<<"size of stack is "<<s.size()<<endl;

    // stack implementation 
    // array and linkedlist



 return 0 ;
}