//Prog. to display the operation of pre and post increment and decrement
#include<iostream>
using namespace std;

int main()
{
	int a=57;
	cout<<"The number is:"<<a<<endl;
	a++;
	cout<<"After Post increment by 1 the number is :"<<a<<endl;
	++a;
	cout<<"After Pre increment by 1 the number is :"<<a<<endl;
	a+=1;
	cout<<"After increasing by 1 the number is:"<<a<<endl;
    a--;
    cout<<"After Post decrement by 1 the number is:"<<a<<endl;
    --a;
    cout<<"After Pre decrement by 1 the number is:"<<a<<endl;
	a-=1;
	cout<<"After decreasing by 1 the number is:"<<a<<endl;
	return 0;
	
}
