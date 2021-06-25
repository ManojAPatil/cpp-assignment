/*Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.*/

#include<iostream>
using namespace std;

int main(){
	float a,c;
     cout<<"Input the distance in kilometer :\n";
     cin>>a;
     c=a*0.62137;
     cout<<"The "<<a<<"Km/hr.means "<<c<<"Miles/hr.\n";
return 0;
}
