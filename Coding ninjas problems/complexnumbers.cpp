/*A ComplexNumber class contains two data members: one is the real part (R) and the other is imaginary (I) (both integers).
Implement the Complex numbers class that contains the following functions -
1. Constructor
You need to create the appropriate constructor.
2. Plus -
This function adds two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 3 +i1
C1.plus(C2) results in: 
C1 = 7 + i6 and C2 = 3 + i1
3. Multiply -
This function multiplies two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 1 + i2
C1.multiply(C2) results in: 
C1 = -6 + i13 and C2 = 1 + i2
4. Print -
This function prints the given complex number in the following format :
a + ib
Note: There is space before and after '+' (plus sign) and no space between 'i' (iota symbol) and b.
Input Format :
The first line of the input contains two integers - real and imaginary part of 1st complex number.

The second line of the input contains Two integers - the real and imaginary part of the 2nd complex number.

The first line of the input contains an integer representing choice (1 or 2) (1 represents plus function will be called and 2 represents multiply function will be called)
Output Format :
The only line of the output prints the complex number in the following format a + ib
Sample Input 1 :
4 5
6 7
1
Sample Output 1 :
10 + i12
Sample Input 2 :
4 5
6 7
2
Sample Output 2 :
-11 + i58*/

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