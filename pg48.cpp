/*48. Write a program in C++ which swap the values of two variables not using third variable.
Sample Output:
Swap two numbers without using third variable:
---------------------------------------------------
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Input 1st number :";
    cin>>a;
    cout<<"Input 2nd number :";
    cin>>b;
    b=b+a;
    a=b-a;
    b=b-a;
    cout<<"After the swapping the 1st number is : "<<a<<endl;
    cout<<"After the swapping the 2nd number is : "<<b<<endl;
return 0;
}
