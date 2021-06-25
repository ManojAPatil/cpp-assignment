 /*Write a program in C++ to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35*/


#include<iostream>
using namespace std;

int main(){
      float a,celcius;
      cout<<"Input the temperature in Fahrenheit:\n ";
      cin>>a;
      cout<<"The temperature in Fahrenheit :"<<a<<endl;
      celcius=(a-32)*5/9;
      cout<<"The temperature in Celcius :"<<celcius<<endl;
return 0;
}
