#include<iostream>
using namespace std;

class CirQueue{
    private:
        int arr[5];
        int front;
        int rear;
        int count;
    public:
        CirQueue()     //constructor
        {
            front=-1;
            rear=-1;
            count = 0;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }

        bool isempty()
        {
            if (front==-1 && rear==-1)
                return true;
            else 
                return false;
        }
        
        bool isfull()
        {
            if((rear+1)%5==front)
                return true;
            else
                return false;
        }

        void enqueue(int val)
        {
            if(isfull())
                {
                    cout<<"queue overflow"<<endl;
                    return ;
                }
            else if(isempty())
                {
                    front=0;
                    rear=0;
                    arr[rear]=val;
                    count++;
                }
            else
                {
                    rear=(rear+1)%5;
                    arr[rear]=val;
                    count++;
                }
        }

        int dequeue()
        {
            int x;
            if (isempty())
                {
                    cout<<"queue underflow"<<endl;
                    return 0;
                }
            else if(front==rear)
                {   
                    x=arr[front];
                    arr[front]=0;
                    rear=-1;
                    front=-1;
                    count--;
                    return x;

                }
            else
                {
                    x=arr[front];
                    arr[front]=0;
                    front=(front+1)%5;
                    count--;
                    return x;
                }
        
        }
       
        int ncount()
        {
                return count;
        }
        void display()
        {
            cout<<"the elements in the queue are :"<<endl;
            for(int i=0;i<5;i++)
            cout<<arr[i]<<"\t"; 
        }
};  


int main()
{
    CirQueue q1;
    int option,value;
    system("cls");
    do
    {
        cout<<"WHAT operation would u like to perform. enter 0 to exit"<<endl;
        cout<<"1. enqueue"<<endl;
        cout<<"2. dequeue"<<endl;
        cout<<"3. is empty()"<<endl;
        cout<<"4. is full()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display()"<<endl;
        cout<<"7. clear screen"<<endl<<endl;
        cin>>option;

        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"enter a value to be entered"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;
            case 2:
                cout<<"dequeue function called , dequeued number is "<<q1.dequeue()<<endl;
                break;
            case 3:
                if (q1.isempty())
                    cout<<"the queue is empty"<<endl;
                else
                    cout<<"the queue is not empty"<<endl;
                break;
            case 4:
                if (q1.isfull())
                    cout<<"the queue is full"<<endl;
                else
                    cout<<"the queue is not full"<<endl;
                break;
            case 5:
                cout<<"total elements in the queue are "<<q1.ncount()<<endl; 
                break;
            case 6:
                q1.display();
                break;
            case 7:
                system("cls");
                break;   
            default:
                cout<<"wrong input"<<endl;          
        }

    
    }while(option!=0);
    return 0;
}