//cpp for temperature converter
#include<iostream>
using namespace std;

double a,c;
void temp_convert();
void temp_convert1();
void temp_convert2();
void temp_convert3();
void temp_convert4();
void temp_convert5();
int main(){
    int choice;
	cout<<"1: C to F\n"<<"2: F to C\n"<<"3: K to F\n";
	cout<<"4: K to C\n"<<"5: F to K\n"<<"6: C to K\n";
	cout<<"Enter your choice\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1: temp_convert();
		        break;
        case 2: temp_convert1();
		        break;
		case 3: temp_convert2();
		        break;
		case 4: temp_convert3();
		        break;
		case 5: temp_convert4();
		        break;
		case 6: temp_convert5();
                break;
	
     } 
return 0;
}
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
void temp_convert2()
{
   	  cout<<"Input the temperature in Kelvin :";
      cin>>a;
      cout<<"The temperature in Kelvin :"<<a<<"\n";
      c=(a-273.15)*9/5+32;
      cout<<"The temperature in Fahreheit :"<<c<<endl;
}
void temp_convert3()
{
	  cout<<"Input the temperature in Kelvin :";
      cin>>a;
      cout<<"The temperature in Kelvin :"<<a<<"\n";
      c=a-273.15;
      cout<<"The temperature in Celcius :"<<c<<endl;
}
void temp_convert4()
{
	  cout<<"Input the temperature in Fahrenheit:\n ";
      cin>>a;
      cout<<"The temperature in Fahrenheit :"<<a<<endl;
      c=(a-32)*5/9+273.15;
      cout<<"The temperature in Kelvin :"<<c<<endl;
}
void temp_convert5()
{
	  cout<<"Input the temperature in Celcius:\n ";
      cin>>a;
      cout<<"The temperature in Celcius :"<<a<<endl;
      c=a+273.15;
      cout<<"The temperature in Kelvin :"<<c<<endl;
}
