#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    };
class LinkedList{
public:
    Node* root;
    void insert_node(Node *n)
    {


    }
    void insert_data (int data)
    {
        Node* second = new Node();
        second -> data = data;
        insert_node(second);
    }
    void print()
    {
        Node *n = root;
        while(n!= NULL){
            cout<< n->data<<" ";
            n = n->next;
        }
    }


};
void printList(Node *n){
    while(n!= NULL){
        cout<< n->data<<" ";
        n = n->next;
    }
}
void insert_in_list(Node *list, Node *new_node)
{

}
int main()

{   Node* head;
    Node* second;
    Node* third;
    head = new Node();
    second = new Node();
    third = new Node();
    head->data =1;
    head->next =second;

    second->data=3;
    second->next =third;

    third->data=6;
    third->next=NULL;

    printList(head);

    return 0;
}
