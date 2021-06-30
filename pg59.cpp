/*59. Write a program in C++ to compute the distance between two points on the surface of earth.
Sample Output:
Print the the distance between two points on the surface of earth:
-----------------------------------------------------------------------
Input the latitude of coordinate 1: 25
Input the longitude of coordinate 1: 35
Input the latitude of coordinate 2: 35.5
Input the longitude of coordinate 2: 25.5
The distance between those points is: 1480.08*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a1,a2,b1,b2,r,pi=3.14,er=6371.01,dist; //er=radius of earth
     cout<<"Input the latitude of coordinate 1:";
     cin>>a1;
     cout<<"Input the longitude of coordinate 1: ";
     cin>>b1;
     cout<<"Input the latitude of coordinate 2:";
     cin>>a2;
     cout<<"Input the longitude of coordinate 2: ";
     cin>>b2;
     r=pi/180;
     a1=r*a1;
	 a2=r*a2;
	 b1=r*b1;
	 b2=r*b2;
     dist=er*acos((sin(a1)*sin(a2))+(cos(a1)*cos(a2))*(cos(b1-b2)));
     cout<<"The distance between those points is:"<<dist<<endl;
return 0;
}
