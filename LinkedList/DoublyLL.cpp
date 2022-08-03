#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value= this->data;

        if(next != NULL){
            delete next;
            next=NULL;
        }
        cout<< "Memory is free for node "<<value<<endl;
    }
};

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node *&head, Node *&tail, int pos, int d)
{
    // Insert at Starting of LL
    if (pos == 1)
    {
        // insertAtHead(head,tail, d);
        if (head == NULL)
        {
            Node *temp = new Node(d);
            head = temp;
            tail = temp;
        }
        else
        {
            Node *temp = new Node(d);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        return;
    }

    // Insert at Mid or Last

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        // insertAtTail(tail,head, d);
        if (tail == NULL)
        {
            Node *temp = new Node(d);
            tail = temp;
            head = temp;
        }
        else
        {
            Node *temp = new Node(d);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head,int pos){
    if(pos == 1){
        Node* temp =head;
        temp->next->prev=NULL;
        head=temp->next;

        //memory free
        temp->next = NULL;
        delete temp;
    }
    else{

    //deleting from middle or last pos
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    curr->prev =NULL;
    prev->next=curr->next;
    curr -> next =NULL;
    delete curr;
    }
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    insertAtHead(head, tail, 10);
    print(head);
    insertAtHead(head, tail, 40);
    print(head);
    insertAtHead(head, tail, 30);
    print(head);
    // cout<< getLength(head)<<endl;
    insertAtTail(tail, head, 50);
    print(head);

    insertAtPos(head, tail, 5, 100);
    print(head);

    deleteNode(head,5);
    print(head);
    return 0;
}