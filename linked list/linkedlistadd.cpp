#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    int key;
    Node* next;

    Node()
    {
        data=0;
        key=0;
    }
    Node(int k,int d)
    {
        key=k;
        data=d;
    }
}

class SinglyLinkedList{
    public:

        Node* head;

        SinglyLinkedList()
        {
            head=NULL;
        }

        SinglyLinkedList(Node *n)
        {
            head = n;
        }

    Node* nodeExist(int k)
    {

    }
}