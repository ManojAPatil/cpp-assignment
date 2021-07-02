#include<iostream>
using namespace std;

int main(){
   int a=1,num;
   cout<<"Enter the number : ";
   cin>>num;
   for(int i=1;i<=num;i++)
   {
        a*=i;
   }
   cout<<"Factorial of "<<num<<" is "<<a<<endl;
return 0;
}
