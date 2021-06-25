/*Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85*/

#include<iostream>
using namespace std;

int main(){
      float a,c;
      cout<<"Input the temperature in Kelvin :";
      cin>>a;
      cout<<"The temperature in Kelvin :"<<a<<"\n";
      c=a-273.15;
      cout<<"The temperature in Celcius :"<<c<<endl;
return 0;
}

