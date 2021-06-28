/*43. Write a language program which accepts the radius of a circle from the 
user and compute the area and circumference.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159*/

#include<iostream.h>
using namespace std;

int main()
{
   double pi=3.14,r,area,circum;
   cout<<"Input the radious of circle : ";
   cin>>r;
   area=pi*(r*r);
   circum=2*pi*r;
   cout<<"The area of circle is : "<<area<<endl;
   cout<<"The circumference of cirle is : "<<circum<<endl;
   return 0;
}

