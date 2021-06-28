/*44. Write a language program to get the volume of a sphere with radius 6.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.333*/

#include<iostream>
using namespace std;

int main(){
	double r=5;
	double pi=3.14,result;
	//result=(4/3)*pi*(r*r*r);
	result=4*pi*(r*r);
	cout<<"Input the radius of a sphere : "<<r<<endl;
	cout<<"The Volume of sphere is : "<<result<<endl;
return 0;
}

