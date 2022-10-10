#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;


    Node(int data){

        this -> data = data;
        this -> next = NULL;

    }
    
};

void insertAtHead(Node* &head, int d){
    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;


}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;

}


int main(){

    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;

    print(head);
    
    // insertAtHead(head, 15);

    // print(head); 

    // insertAtHead(head, 20);
    // print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 14);
    print(head);

    return 0;
}