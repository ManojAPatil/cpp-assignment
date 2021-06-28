/*51. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr.*/

#include<iostream>
using namespace std;

int main(){
    double a,result;
    cout<<"Input the distance in kilometer :";
    cin>>a;
    result=a*0.62137;
    cout<<"The "<<a<<"Km/hr. means "<<result<<" Miles/hr."<<endl;
return 0;
}
