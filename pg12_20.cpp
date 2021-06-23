#include<iostream>
#include<cmath>
using namespace std;

float pi=3.14,r,result,l,b,h,s;
void circle();
void triangle();
void rectangle();
void cylinder();
void cube();
void sphere();
void temp_convert();
void swap();
void add();
int main()
{
	int choice;
	cout<<"1: Circle\n"<<"2: Triangle\n"<<"3: Rectangle\n";
	cout<<"4: Cylinder\n"<<"5: Cube\n"<<"6: Sphere\n"<<"7: Temp_convert\n";
	cout<<"8: Swap numbers\n"<<"9: Addition of 2 numbers\n";
	cout<<"Enter your choice\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1: circle();
		        break;
        case 2: triangle();
		        break;
		case 3: rectangle();
		        break;
		case 4: cylinder();
		        break;
		case 5: cube();
		        break;
		case 6: sphere();
		        break;
		case 7: temp_convert();
		        break;			   	   	          
        case 8: swap();
		        break;			   	   	        
        case 9: add();
                break;
	}
    return 0;
}
void add()
{
	cout<<"Enter first no.\n";
	cin>>l;
	cout<<"Enter second no.\n";
	cin>>b;
	r=l+b;
	cout<<"Addition is :"<<r<<endl;
}
void temp_convert()
{
   cout<<"Enter the celcius value\n";
   cin>>r;
   result=(r*9/5)+32;
   cout<<"The fahreheit value is:"<<result<<"F"<<endl;
}
void circle()
{
	cout<<"Enter the radius\n";
    cin>>r;
    result=pi*r*r;
    cout<<"The area of circle is:"<<result<<endl;
    result=2*pi*r;
    cout<<"The circumference of circle is:"<<result<<endl;
	
}
void triangle()
{
	cout<<"Enter side1\n";
    cin>>l;
    cout<<"Enter side2\n";
    cin>>b;
    cout<<"Enter side3\n";
    cin>>h;
    s=(l+b+h)/2;
    r=s*(s-l)*(s-b)*(s-h);
    result=sqrt(r);
    cout<<"The Area of triangle is:"<<result<<endl;
	
}
void rectangle()
{
	cout<<"Enter the length\n";
    cin>>l;
    cout<<"Enter the breadth\n";
	cin>>b; 
	result=l*b;
	cout<<"The area of rectangle is:"<<result<<endl;
	result=2*(l+b);
	cout<<"The perimeter of rectangle is"<<result<<endl;
}
void cylinder()
{
	cout<<"Enter the radius\n ";
    cin>>r;
    cout<<"Enter the height\n";
    cin>>h;
    result=pi*r*r*h;
    cout<<"The volume of cylinder is:"<<result<<endl;
}
void cube()
{
	cout<<"Enter the length of cube\n";
    cin>>l;
    result=l*l*l;
    cout<<"The volume of cube is:"<<result<<endl;
}
void sphere()
{
	cout<<"Enteer radius\n";
	cin>>r;
	result=4/3*pi*r*r*r;
	cout<<"The Volume of sphere is:"<<result<<endl;
}
void swap()
{
	cout<<"Enter first number\n";
    cin>>r;
	cout<<"Enter first number\n";
	cin>>l;
	cout<<"Before swap a:"<<r<<"and b:"<<l<<endl;
	b=r;
	r=l;
	l=b;
	cout<<" After swap a:"<<r<<"and b:"<<l<<endl;

}
	
