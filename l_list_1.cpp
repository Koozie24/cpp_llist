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
    auto current_node = head;

    while(current_node){
        if(current_node->data == data){
            return true;
        }
        else{
            current_node = current_node->next;
        }
    }
    return false;
}

bool Linked_List::delete_node(int data){
    auto current_node = head;
    Node *previous_node = nullptr;

    while(current_node && current_node->data != data){
        previous_node = current_node;
        current_node = current_node->next;

        if(current_node == nullptr){
            return false;
        }
        if(current_node == head){
            head = current_node->next;
        }
        else{
            previous_node->next = current_node->next;
        }

        if(current_node == tail){
            tail = previous_node;
        }

        delete current_node;
        return true;
    }
}
int main(){

    return 0;
}