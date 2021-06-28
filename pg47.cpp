/*47. Write a program in C++ to find the area of any triangle using Heron's Formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 6
Input the length of 3rd side of the triangle : 7
The area of the triangle is : 14.6969*/

#include<iostream>
using namespace std;

int main(){
	double result,a,b,c,s,r;
    cout<<"Input the length of 1st side of the triangle : ";
    cin>>a;
    cout<<"Input the length of 2nd side of the triangle : ";
    cin>>b;
    cout<<"Input the length of 3rd side of the triangle : ";
    cin>>c;
    s=(a+b+c)/2;
    r=s*(s-a)*(s-b)*(s-c);
    result=sqrt(r);
    cout<<"The Area of triangle is:"<<result<<endl;

return 0;
}

