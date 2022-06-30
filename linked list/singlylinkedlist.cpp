#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node()
        {
            key=0;
            data=0;
            next=NULL;
        }

        Node(int k,int d)
        {
            key = k;
            data = d;
        }
};

class SinglyLinkedList{
    public:
        Node* head;

    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }

    Node* nodeExist(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;

        while(ptr!=NULL)
        {
            if(ptr->key==k)
        }

    }
}
int main()
{
    return 0;
}