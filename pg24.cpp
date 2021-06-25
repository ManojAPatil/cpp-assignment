/*Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33*/

#include<iostream>
using namespace std;

int main(){
      float a,c;
      cout<<"Input the temperature in Kelvin :";
      cin>>a;
      cout<<"The temperature in Kelvin :"<<a<<"\n";
      c=(a-273.15)*9/5+32;
      cout<<"The temperature in Fahreheit :"<<c<<endl;
return 0;
}
