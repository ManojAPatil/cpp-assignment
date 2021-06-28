/*54. Write a program in C++ to enter P, T, R and calculate Simple Interest.
Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000*/

#include<iostream>
using namespace std;

int main(){
       double p,t,r,result;
       cout<<"Input the principle : ";
       cin>>p;
       cout<<"Input the rate of interest :";
       cin>>r;
       cout<<"Input the Time :";
       cin>>t;
       result=(p*t*r)/100;
       cout<<"The simple interest for the amount "<<p<<" for"<<t<<" year @"<<r<<" % : "<<result<<endl;
return 0;
}
