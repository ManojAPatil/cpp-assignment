/*53. Write a program in C++ to calculate area of an equilateral triangle.
Sample Output:
Calculate the area of the Equilateral Triangle :
----------------------------------------------------
Input the value of the side of the equilateral triangle: 5
The area of equilateral triangle is: 10.8253*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
      double a,result;
      cout<<"Input the value of the side of the equilateral triangle:";
      cin>>a;
      double b=sqrt(3);
	  result=(b/4)*a*a;
	  cout<<"The area of equilateral triangle is: "<<result<<endl;
return 0;
}
