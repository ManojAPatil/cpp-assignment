#include<iostream>
using namespace std;
 
 int main()
 {  int a=2147483647,b=-2147483648;
 	cout<<"Check overflow/underflow during various arithmetical operation:\n";
 	cout<<"Range of int is[-2147483648,2147483647]\n";
 	cout<<"------------------------------------------------------------------\n";
 	cout<<"Overflow the integer range and set in minimum range:"<<a+1<<endl;
    cout<<"Increasing fron its minimum range:"<<a+2<<endl;
    cout<<"Product is:"<<a*a<<endl;
    cout<<"Underflow the integer range and set in maximum range:"<<b-1<<endl;
    cout<<"Increasing fron its maximum range:"<<b-2<<endl;
    cout<<"Product is:"<<b*b<<endl;
    return 0;
 }
