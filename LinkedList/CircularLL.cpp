#include<iostream>
using namespace std;

class Node{
   public:
   int  data;
   Node* next;

   //constructor
   Node(int data){
    this->data=data;
    this->next=NULL;
   }

   //DESTRUCTOR
   ~Node(){
    int value= this->data;
    if(this->next != NULL){
        delete next;
        next = NULL;
      }
      cout<< "The memory is free for node "<< value << endl;
   }

};

void insertNode(Node* &tail, int elem, int d){
    //if LL is empty
    if(tail == NULL){
        Node* newNode= new Node(d);
        tail = newNode;
        newNode->next=newNode;
    }else{
            //Non empty list 
    Node* curr=tail;

    while(curr->data != elem){
        curr= curr->next;
    }

    //element is found
    Node* temp = new Node(d);
   
    temp->next=curr->next;
    curr->next=temp;

    }
 }

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

void splitLinkedList(Node* tail){
    if(tail == NULL){
        cout<<" Empty  circular LL"<<endl;
        return;
    }

    Node* slow=tail;
    Node* fast=tail->next;

    while((fast!=tail)){
        cout<<slow->data<<" ";
        slow=slow->next;
        fast=fast->next->next;
    }



}

 void print(Node* tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<< "List is empty"<<endl;
        return;
    }
    do{
       cout<< tail->data <<" ";
       tail=tail->next;
    } while(tail !=temp);

    cout<<endl;
 }

int main()
{   
    Node* tail=NULL;
    insertNode(tail,5,3);
    // print(tail);
    insertNode(tail,3,5);
    // print(tail);
    insertNode(tail,5,7);
    // print(tail);
    insertNode(tail,7,9);
    // print(tail);
    insertNode(tail,9,11);
    // print(tail);
    insertNode(tail,5,8);
    print(tail);
    splitLinkedList(tail);
    // deleteNode(tail,3);
    // print(tail);
    return 0;
}