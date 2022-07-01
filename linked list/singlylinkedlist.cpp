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

    //1. check if node exists using key value

    Node* nodeExist(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;

        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }

    //2. append a node to the list

    void appendNode(Node *n)
    {
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"\nNode already exists of key value : "<<n->key<<" use different key value"<<endl;
        }
        else
        {
            if(head==NULL)
            {
                head = n;
                cout<<"Node Appended"<<endl;
            }
            else
            {
                Node* ptr = head;
                while(ptr->next!=NUll)
                {
                ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node Appended"<<endl;
            }
        }
    }

    //3. prepend Node - Attach a node at the start
    void prependNode(Node *n)
    {
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"\nNode already exists of key value : "<<n->key<<" use different key value"<<endl;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }

    //4. Insert a node between two nodes
    void insertNodeAfter(int k,Node *n)
    {
       Node* ptr = nodeExist(k);
       if(ptr==NULL)
       {
        cout<<"no node exist with key value"<<k<<endl;
       } 
       else
       {
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"\nNode already exists of key value : "<<n->key<<" use different key value"<<endl;
        }
        else
        {
            n->next=ptr->next;
            ptr->next=n;
        }
       }
    }

    //5. delete a node by key
    void deleteNodeByKey(int k)
    {
        if(head==NULL)
        {
            cout<<"Linked List already empty. cant delete"<<endl;
        }
        else if(head!= NULL)
        {
            if(head->key==k)
            {
                head=head->next;
                cout<<"Node UNlinked with key value "<<k<<endl;
            }
            else
            {
                //42:54 paused
            }
        }
    }
};
int main()
{
    return 0;
}