/*Write a program in C++ to input a single digit number and print a rectangular
 form of 4 columns and 6 rows.
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555*/

#include<iostream>
using namespace std;

int main(){
     int a;
     cout<<"Input the number :";
     cin>>a;
     cout<<a<<a<<a<<a<<endl;
     cout<<a<<" "<<" "<<a<<endl;
     cout<<a<<" "<<" "<<a<<endl;
     cout<<a<<" "<<" "<<a<<endl;
     cout<<a<<" "<<" "<<a<<endl;
     cout<<a<<a<<a<<a<<endl;
return 0;
}
