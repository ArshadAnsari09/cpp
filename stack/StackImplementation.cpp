#include<iostream>
using namespace std;

class Stack{

   public:
   int *arr;
   int top;
   int size;

   Stack(int size){
    this->size=size;
    arr = new int[size];
    top=-1;
   } 

   void push(int elem){
    //stack is not empty
    if(size-top>1){
        top++;
        arr[top]=elem;
    }
    else{
        cout << "stakc is overflow"<<endl;
    }

   }

   void pop(){
      if(top>=0){
        top--;
      }
      else{
        cout << "Stack is underflow" <<endl;
      }
   }

   int peek(){
      if(top >= 0)
      return arr[top];

      else{
        cout << "stack is empty" << endl;
        return -1;
      }
   } 

   bool isEmpty(){
    return top == -1;
   }
};

int main()
{   
    Stack st(6);
    st.push(5);
    st.push(6);
    st.push(8);
    st.push(10);
    st.push(12);
    st.push(14);
    // st.push(30);
    cout << "Top Element is: " << st.peek() << endl;
    cout << "Is empty: " << st.isEmpty()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    cout << "Top Element is: " << st.peek() << endl;
    return 0;
}