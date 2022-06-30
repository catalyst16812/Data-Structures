/*Problem Statement
Create a class named Person with a string variable 'name' and an integer variable 'age,' such that these variables are not accessible outside the class and implement a way to initialize the variables and print the variables.
Functions:
1.SetValue- That Sets The Variables Value.
2.GetValue- That Prints The Variables Value.
Input Format:
The first line of input contains a single string Name, representing the name of the person. 

The second line of input contains a single integer Age, representing the age of the person.
Output Format:
The only line of output prints the name and age by sticking to the sample input format. Mind that the output string won't have preceding or trailing spaces.
Sample Input 1:
Afzal
67
Sample Output 1:
The name of the person is Afzal and the age is 67.*/

#include<iostream>
#include<string>

using namespace std;

class Person {
   // Complete the class
    private:   
    string name;
    int age;
    public:
    void SetValue(){
        
    cin>>name;
    cin>>age;
      
    }
    void GetValue(){
        cout<<"The name of the person is "<<name;
        cout<<" and the age is "<<age<<".";
    }
};

int main() {
    Person p;
        
    p.SetValue();
    p.GetValue();
    //Write your code here

    return 0;
}