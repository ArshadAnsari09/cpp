#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;

        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout << "Memory is free for node " << value <<endl;
    }
};

// insertFunctions

// at starting position
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// at last position
void insertAtTail(Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// at middle pos
void insertAtMid(Node *&head, int pos, int d)
{
    Node *temp = head;
    int cnt = 0;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void insert(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail,d);
    // Node *temp = new Node(d);
    // tail->next = temp;
    // tail = temp;
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//deleting a node
  void deleteNode(Node* &head, int pos){
    //deleting 1st node
       if(pos == 1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
       }else{
        //deleting other pos(middle or last)
        Node* curr = head;
        Node* prev =NULL;

        int cnt=1;
        while(cnt < pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next = curr -> next;
        curr->next =NULL;
        delete curr;
       }
  }

void print(Node *&head)
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
    Node *head = new Node(10);
    // print(head);

    Node *tail = head;

    insert(head, tail, 2, 20);
    insert(head, tail, 3, 30);
    insert(head, tail, 4, 40);
    insert(head, tail, 5, 50);
    cout << "After insertion "<<endl;
    print(head);

    deleteNode(head,5);
    print(head);



    // insertAtHead(head, 2);
    // cout << "Adding new head" << endl;
    // print(head);
    // insertAtHead(head, 3);
    // cout << "Adding new head" << endl;
    // print(head);
    // insertAtHead(head, 5);
    // cout << "Adding new head" << endl;
    // print(head);
    // insertAtMid(head, 1, 6);
    // cout << "Adding node in middle" << endl;
    // print(head);

    // insert(head, tail, 1, 10);
    // print(head);
    // insert(head, tail, 5, 11);
    // print(head);
    // cout<< tail->data<<endl;
    // insertAtHead(head,2);
    // print(head);
    // Node* tail=head;
    // insertAtTail(tail,1);
    // print(head);

    return 0;
}