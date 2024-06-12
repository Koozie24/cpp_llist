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

int main(){

    return 0;
}