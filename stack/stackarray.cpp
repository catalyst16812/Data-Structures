#include<iostream>
#include<string>

using namespace std;
class stack{
    private:
    int top;
    int arr[5];
    public:
    stack()
    {
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }

    bool isempty()
    {
        if(top==-1)
            return true;
        else 
            return false;
    }

    bool isfull()
    {
        if(top==4)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        if(isfull())
            cout<<"\n stack overflow";
        else
        {
        top++;
        arr[top]=val;

        }
    }

    int pop()
    {
        if(isempty())
        {
            cout<<"\n Stack Underflow";
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top]= 0;
            top--;
            return popvalue;
        }
    }

    int count()
    {
        return(top+1);
    }

    int peek(int pos)
    {
        if(isempty())
        {
            cout<<"\nStack underflow";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos,int val)
    {
        arr[pos]=val;
        cout<<"\n value changed at"<<pos<<endl;
    }

    void display()
    {
        cout<<"\nAll value in stack are : ";
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<"  ";
        }

    }
};

int main()
{
    stack s1;
    int option,position,value;

    do
    {
        cout<<"WHAT operation would u like to perform. enter 0 to exit"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. is empty()"<<endl;
        cout<<"4. is full()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. clear screen"<<endl<<endl;
        cin>>option;

        switch(option)
        {
            case 1:
                cout<<"enter an item to push is stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"pop function called . popped value is"<<s1.pop()<<endl;
                break;
            case 3:
                if(s1.isempty())
                    cout<<"stack is empty"<<endl;
                else
                    cout<<"stack is not empty"<<endl;
                break;
            case 4:
                if(s1.isfull())
                    cout<<"stack is full"<<endl;
                else
                    cout<<"stack is not full"<<endl;
                break;
            case 5:
                cout<<"enter the position where you want to peek"<<endl;
                cin>>position;
                cout<<"peek function called value at position "<<position<<" is "<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"total number of elements are "<<s1.count();
                break;
            case 7:
                cout<<"change function called"<<endl;
                cout<<"enter the position of item you want to change :";
                cin>>position;
                cout<<endl;
                cout<<"enter the value of item you want to change :";
                cin>>value;
                s1.change(position,value);
                break;
            case 8:
                cout<<"display function called " <<endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Wrong entry"<<endl;
        }

    
    }while(option!=0);
    return 0;
}