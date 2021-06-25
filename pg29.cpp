/*Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1*/

#include<iostream>
using namespace std;

int main(){
       int a,b,c,r;
       cout<<"Input the dividend :";
       cin>>a;
       cout<<"Input the divisor :";
       cin>>b;
       c=a/b;
       cout<<"The quotient of the division is :"<<c<<endl;
       r=a%b;
       cout<<"The remainder of the division :"<<r<<endl;
return 0;
}
