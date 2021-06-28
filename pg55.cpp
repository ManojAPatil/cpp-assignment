/*55. Write a program in C++ to enter P, T, R and calculate Compound Interest.
Sample Output:
Calculate the Compound Interest :
------------------------------------- Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
10 % is: 23073.8*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
     double p,t,r,result,interest;
       cout<<"Input the principle : ";
       cin>>p;
       cout<<"Input the rate of interest :";
       cin>>r;
       cout<<"Input the Time :";
       cin>>t;
       result=p*pow((1+r/100),t);
	   interest=p*pow((1+r/100),t)-p;
       cout<<"The  interest after compounded for the amount "<<p<<" for"<<t<<" year @"<<r<<" % : "<<interest<<endl;
       cout<<"The total amount after compounded for the amount"<<p<<" for"<<t<<" years @"<<r<<" % :"<<result<<endl;
return 0;
}
