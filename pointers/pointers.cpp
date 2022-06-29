#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a =5;

    int     *ip;    //integer pointer
    double  *dp;    //double pointer
    float   *fp;
    char    *cp;

    ip=&a;

    cout<<"variable value "<<a;
    cout<<"\naddress of a "<<ip;
    cout<<"\npointer value "<<*ip;

    *ip=6;

    cout<<"\n\n\nvariable value "<<a;
    cout<<"\naddress of a "<<ip;
    cout<<"\npointer value "<<*ip<<endl;

    ip++;

    cout<<ip<<"    "<<*ip<<endl;

    return 0;
}