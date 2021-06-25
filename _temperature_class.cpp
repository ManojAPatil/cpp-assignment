//cpp for temperature converter
#include<iostream>
using namespace std;

class myClass{
	public:
           double a,c;
           void temp_convert()
           {
               cout<<"Input the celcius value\n";
               cin>>a;
               c=(a*9/5)+32;
               cout<<"The fahreheit value is:"<<c<<"F"<<endl;
           }
           void temp_convert1()
             {
               cout<<"Input the temperature in Fahrenheit:\n ";
               cin>>a;
               cout<<"The temperature in Fahrenheit :"<<a<<endl;
               c=(a-32)*5/9;
               cout<<"The temperature in Celcius :"<<c<<endl;
             }
           void temp_convert2();
		   myClass()
		   	{
              cout<<"Input the temperature in Kelvin :";
              cin>>a;
              cout<<"The temperature in Kelvin :"<<a<<"\n";
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
            void temp_convert5()
            {
	           cout<<"Input the temperature in Celcius:\n ";
               cin>>a;
               cout<<"The temperature in Celcius :"<<a<<endl;
               c=a+273.15;
               cout<<"The temperature in Kelvin :"<<c<<endl;
            }
};
void myClass::temp_convert2(){
   	  cout<<"Input the temperature in Kelvin :";
      cin>>a;
      cout<<"The temperature in Kelvin :"<<a<<"\n";
      c=(a-273.15)*9/5+32;
      cout<<"The temperature in Fahreheit :"<<c<<endl;
}
int main(){
       myClass myObj;
       myObj.temp_convert();
       myObj.temp_convert1();
       myObj.temp_convert2();
       myObj.temp_convert5();
	return 0;
}



