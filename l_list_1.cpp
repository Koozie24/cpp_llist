#include <iostream>

/* The purpose of this program is to demonstrate an implementation of the linked list data structure. 
I reference the following link: https://www.w3schools.in/data-structures/linked-list */

//define a node that contains data and pointer to next node
struct Node {
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr){}
};

class Linked_List {
    Node* head;
    Node* tail;

    public: 
        Linked_List() : head(nullptr), tail(nullptr) {}

        void insert_at_end(int data);
        bool search(int data);
        bool delete_node(int data);
};

void Linked_List::insert_at_end(int data){
    Node* new_node = new Node(data);

    //no head set head and tail to reference of new_node
    if(head == nullptr){
        head = new_node;
        tail = new_node;
    }
    //otherwise set tail to new node and update tail
    else{
        tail->next - new_node;
        tail = new_node;
    }
}

bool Linked_List::search(int data){
    auto current_value = head;

    while(current_value){
        if(current_value->data == data){
            return true;
        }
        else{
            current_value = current_value->next;
        }
    }
    return false;
}

int main(){

    return 0;
}