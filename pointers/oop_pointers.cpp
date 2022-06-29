#include <iostream>
using namespace std;
    
    //we learn three oop concepts here
    //passing objects as arguments in functions
    //returning objects from functions
    //pointers to objects

class complexnumber{

    private:
        int real;
        float imag;
    public:
        complexnumber(){
            }
        complexnumber(int r,float i)
            {
                real=r;
                imag=i;
            }
        void display()
        {
            cout<<"\ncomplex number is "<<real<<"+"<<imag<<"i"<<endl;
        }
        int getreal()
        {
            return real;
        }
        float getimag()
        {
            return imag;
        }
};

complexnumber addnumber(complexnumber n1,complexnumber n2)
{
    
    int r;
    float i;
    r=n1.getreal()+n2.getreal();
    i=n1.getimag()+n2.getimag();
    complexnumber temp(r,i);
    return temp;
}

int main()
{
    complexnumber comp1(5,4), comp2(6,8), comp3;
system("cls");
    comp1.display();

    comp2.display();

    comp3 = addnumber(comp1,comp2);
    cout<<"\naddition of two number is";
    comp3.display();

    cout<<"\n\npointer to object  ";
    complexnumber *ptr1;
    ptr1 = &comp3;
    ptr1->display();

    ptr1 = &comp2;
    ptr1->display();

    cout<<"\n\n value stored in ptr1 is "<<ptr1;

    return 0;
}