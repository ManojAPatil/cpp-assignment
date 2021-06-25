//cpp for temperature converter
#include<iostream>
using namespace std;

class myClass{
	public:
           double a,c;
           void temp_convert(double a)
           {
               c=(a*9/5)+32;
               cout<<"The fahreheit value is:"<<c<<"F"<<endl;
           }
           void temp_convert1(double a)
             {
               c=(a-32)*5/9;
               cout<<"The temperature in Celcius :"<<c<<endl;
             }
           void temp_convert2(double a);
		   myClass(double a)
		   	{
              c=a-273.15;
              cout<<"The temperature in Celcius :"<<c<<endl;
		   }
		   /*myClass()
             {
	           cout<<"Input the temperature in Fahrenheit:\n ";
               cin>>a;
               cout<<"The temperature in Fahrenheit :"<<a<<endl;
               c=(a-32)*5/9+273.15;
               cout<<"The temperature in Kelvin :"<<c<<endl;
              }*/
            void temp_convert5(double a)
            {
               c=a+273.15;
               cout<<"The temperature in Kelvin :"<<c<<endl;
            }
};
void myClass::temp_convert2(double a){
      c=(a-273.15)*9/5+32;
      cout<<"The temperature in Fahreheit :"<<c<<endl;
}
int main(){
       myClass myObj(10);
       myObj.temp_convert(20);
       myObj.temp_convert1(30);
       myObj.temp_convert2(40);
       myObj.temp_convert5(50);
	return 0;
}



