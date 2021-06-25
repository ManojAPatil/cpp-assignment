/*Write a program in C++ to check whether a number is positive, negative or zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/

#include<iostream>
using namespace std;

int main(){
    int a,c;
    cout<<"Input a Number :";
    cin>>a;
    if(a==0){
	cout<<"The entered number is zero.\n";
	}
	else if(a%2==0)
    {
    	cout<<"The entered number is positive.\n";
	}
	
	else
	cout<<"The entered number is negative\n";
return 0;
}
