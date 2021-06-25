 /*Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/

#include<iostream>
using namespace std;

int main(){
      float a,c;
      cout<<"Input the temperature in Celcius:\n ";
      cin>>a;
      cout<<"The temperature in Celcius :"<<a<<endl;
      c=a+273.15;
      cout<<"The temperature in Kelvin :"<<c<<endl;
return 0;
}
