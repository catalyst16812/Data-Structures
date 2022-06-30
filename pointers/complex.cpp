#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    private:
        int real=0;
        int imag=0;
    public:
        ComplexNumbers(){

        }
        ComplexNumbers(int r,int i)
        {
            real=r;
            imag=i;
        }
        void print()
        {
            cout<<real<<" + i"<<imag;
        }
        int getreal(){
            return real;
        }
    
        int getimag(){
            return imag;
        }
        void plus(ComplexNumbers b)
        {
        real= real+b.getreal();
        imag= imag+b.getimag(); 
        }
        void multiply(ComplexNumbers b)
        {
            //r1*r2  +  r1*i2  -  i1*i2  + i1*r2
           int temp1 = imag*b.getreal();
           int temp2 = real*b.getimag();
        real= real*b.getreal()-imag*b.getimag();
        imag= temp1+temp2;
        }
};

int main() {
    system("cls");
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;
  cout<<endl<<endl;
  c1.print();
  cout<<endl<<endl;
    c2.print();
  cout<<endl<<endl;
  cout<<endl<<endl;
    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}