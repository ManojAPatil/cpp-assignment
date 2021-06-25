/*Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300*/

#include<iostream>
using namespace std;

int main(){
      float a,c;
      cout<<"Input the temperature in Fahrenheit:\n ";
      cin>>a;
      cout<<"The temperature in Fahrenheit :"<<a<<endl;
      c=(a-32)*5/9+273.15;
      cout<<"The temperature in Kelvin :"<<c<<endl;
return 0;
}
