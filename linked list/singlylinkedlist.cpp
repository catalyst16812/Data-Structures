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
                while(ptr->next!=NULL)
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
                Node* temp=NULL;
                Node* prevptr=head;
                Node* currentptr=head->next;
                while(currentptr!=NULL)
                {
                    if(currentptr->key==k)
                    {
                        temp=currentptr;
                        currentptr=NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if(temp!=NULL)
                {
                    prevptr->next=temp->next;
                    cout<<"Node unlinked with key : "<<k<<endl;
                }
                else
                {
                    cout<<"Node Does not exist with key : "<<k<<endl;
                }
            }
        }
    }

    //6. update node by key
    void updateNodeByKey(int k,int d)
    {
        Node* ptr = nodeExist(k);
        if(ptr!=NULL)
        {
            ptr->data = d;
            cout<<"Node data updated "<<endl;
        }
        else{
            cout<<"Node doesn't exist "<<endl;
        }
    }

    //7. printing
    void printlist()
    {
        if(head==NULL)
        {
            cout<<"No node exist in the list "<<endl;
        }
        else{
            cout<<endl<<"singly linked list values :";
            Node* temp=head;

            while(temp!=NULL)
            {
                cout<<"{"<<temp->key<<","<<temp->data<<"} --> ";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    SinglyLinkedList s;
    int option;
    int key1,k1,data1;
    system("cls");
    do
    {
        cout<<"\nWhat operation would like to perform ? select option number . Enter 0 to exit."<<endl;
        cout<<"1. append node"<<endl;
        cout<<"2. prepend node"<<endl;
        cout<<"3. insert node after"<<endl;
        cout<<"4. delete node by key"<<endl;
        cout<<"5. update node by key"<<endl;
        cout<<"6. print the linked list"<<endl;
        cout<<"7. clear screen"<<endl;
        cin>>option;
        Node* n1 = new Node();

        switch(option)
        {
            case 0: break;
            case 1: cout<<"Append node operation \n Enter key and data of the node to append"<<endl;
                    cin>>key1;
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    s.appendNode(n1);
                    break;
            case 2: cout<<"prepend node operation \n Enter key and data of the node to prepend"<<endl;
                    cin>>key1;
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    s.prependNode(n1);
                    break;
            case 3: cout<<"insert node after operation \n Enter key of existing node after which you want to insert new node"<<endl;
                    cin>>k1;
                    cout<<"enter key and data of the new node first "<<endl;
                    cin>>key1;
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    s.insertNodeAfter(key1,n1);
                    break;
            case 4: cout<<"node delete by key operation \n enter the key of node to be deleted"<<endl;
                    cin>>k1;
                    s.deleteNodeByKey(k1);
                    break;
            case 5: cout<<"update node by key operation \n enter key and new data to be updated"<<endl;
                    cin>>key1;
                    cin>>data1;
                    s.updateNodeByKey(key1,data1);
                    break;
            case 6: s.printlist();
                    break;
            case 7: system("cls");
                    break;
            default:cout<<"wrong option number"<<endl;
        }
    }while(option!=0);
    return 0;
}