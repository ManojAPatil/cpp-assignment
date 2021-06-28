/*58. Write a program in C++ to print the area of a polygon.
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	 double a,b,result,pi=3.14;
         cout<<"Input the number of sides of the polygon : ";
         cin>>a;
         cout<<"Input the length of each side of the polygon:";
         cin>>b;
         result=(a *(b*b)) / (4.0 * tan((pi/a)));
         cout<<"The area of the polygon is:"<<result<<endl;
return 0;
}
