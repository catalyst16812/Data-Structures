/*Problem Statement
Design a class called Rectangle. It contains two data members as length(L) and breadth(B); and a member function getArea(). The member function computes the area of the given rectangle and returns it to the caller.
Note:
Area of a rectangle = length x breadth
Data Members:
1. length: Length of the rectangle
2. breadth: Breadth of the rectangle 
Member Functions:
1. getArea(): that calculates the area of the rectangle and returns the value.
Note:
You do not have to take input, just create the Class and set the name of the Data Members and function as given in the above discription.
Input Format:
The only line of input contains two integers, both separated by a single space denoting the length and breadth respectively.
Output Format:
The only line of output prints the area of the rectangle.
Constraints:
0 <= L, B <= 100
Sample Input 1:
4 20
Sample Output 1:
80
Explanation Of Sample Input 1:
Length of the rectangle is 4 and breadth is 20. 
Hence the area of the rectangle is (length*breadth). 
So the answer is 4*20=80.
*/

class Rectangle {
    // Write your code here.
    public:
    float length;
    float breadth;
    float getArea(){
        float area=length*breadth;
        return area;
    }
};