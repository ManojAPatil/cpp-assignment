/*Write a program in C++ to print the area and perimeter of a rectangle.
Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2*/

#include<iostream>
using namespace std;

int main(){
      double a,b,c,d;
     cout<<"Input the width of the rectangle:";
     cin>>a;
     cout<<"Input the height of the rectangle:";
     cin>>b;
     c=a*b;
     d=2*(a+b);
	 cout<<"The area of the rectangle is:"<<c<<endl;
     cout<<"The perimeter of the rectangle is:"<<d<<endl;
return 0;
}
